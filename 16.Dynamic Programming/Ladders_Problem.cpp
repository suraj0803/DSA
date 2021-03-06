#include<iostream>

using namespace std;

int ladder_topdown(int n, int k, int dp[]){
    // Base case
    if(n==0){
        return 1;
    }
    // Look up
    if(dp[n]!=0){
        return dp[n];
    }
    // Recursive case
    int ways = 0;
    for(int i=1; i<=k; i++){
        if(n-i>=0){
            ways += ladder_topdown(n-i,k,dp);
        }
    }
    return dp[n] = ways;
}

int main()
{
    int n,k;
    cin>>n>>k;

    int dp[100] = {0};

    cout<<ladder_topdown(n,k,dp);

    return 0;
}