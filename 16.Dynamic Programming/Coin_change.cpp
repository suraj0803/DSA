#include<iostream>
#include<climits>

using namespace std;

// Top down
int Min_Coins_Topdown(int amt, int coins[], int T, int dp[]){
    // Base case
    if(amt==0){
        return 0;
    }
    //Look UP
    if(dp[amt]!=0){
        return dp[amt];
    }
    // Recursive case
    int ans = INT32_MAX;
    for(int i=0; i<=T; i++){
        if((amt-coins[i])>=0){
            int subproblems = Min_Coins_Topdown((amt-coins[i]),coins,T,dp);
            ans = min(ans,subproblems) + 1;
        }
    }
    dp[amt] = ans;
    return dp[amt];
    
}

int main()
{
    int coins[] = {1,7,10};
    int T = sizeof(coins)/sizeof(int);
    int amt = 15;

    int dp[100] = {0};

    cout<<Min_Coins_Topdown(amt,coins,T,dp);

    return 0;
}