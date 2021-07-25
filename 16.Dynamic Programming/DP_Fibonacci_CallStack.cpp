#include<iostream>

using namespace std;

// TOp down Approch

int fib(int n, int dp[])
{
    if(n==0 || n==1){
        return n;
    }
    if(dp[n]!=0){
        return dp[n];
    }
    int ans;
    ans = fib(n-1,dp) + fib(n-2,dp);
    return dp[n] = ans;
}


int main()
{
    int n;
    cin>>n;
    int dp[100] = {0};

    cout<<fib(n,dp);

    return 0;

}