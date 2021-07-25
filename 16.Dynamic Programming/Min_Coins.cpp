#include<iostream>

using namespace std;


int min_coins(int n, int coins[],int T, int dp[]){
    // Base Case
    if(n==0){
        return 0;
    }
    //Lookup
    if(dp[n]!=0){
        return dp[n];
    }
    //Recurive case
    int ans = INT_MAX;
    for(int i=0; i<T; i++){
        if(n-coins[i]>=0){
            int subprob = min_coins(n-coins[i],coins,T,dp);
            ans = min(ans,subprob+1);
        }
    }
    dp[n] = ans;
    return dp[n];
}

int min_coinsBU(int N, int coins[],int T, int dp[]){
    int dp[100] = {0};

    //Iterate over all states 1......N
    for(int n=1; n<=N; n++){
        //Init the curr ans as int_max
        dp[n] = INT_MAX;

        for(int i=0; i<T; i++){
            if(n-coins[i]>=0){
                int subprob = dp[n-coins[i]];
                dp[i] = min(dp[i], subprob+1);
            }
        }
    }
    return dp[N];
}

int main()
{
    int N = 15;
    int coins[] = {1,7,10};
    int dp[100] = {0};

    int T = sizeof(coins)/sizeof(int);

    cout<<min_coins(N,coins,T,dp)<<endl;

    return 0;

}