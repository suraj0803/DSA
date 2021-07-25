#include<iostream>

using namespace std;

// Maintain a array to store overlapping subproblems or adding memory to recursive solution.
// dynamic solution = recursive + memoization.
int Fib_Topdown(int n, int dp[]){
    // Base case
    if(n==0 || n==1){
        return n;
    }
    // Look up
    if(dp[n]!=0){
        return dp[n];
    }
    int ans;
    ans = Fib_Topdown(n-1, dp) + Fib_Topdown(n-2, dp);
    return dp[n] = ans; // here before returning the ans we are storing in dp[n].
}

int Fib_bottonmUp(int n){
    int dp[100] = {0};
    // Base Condition
    dp[1] = 1;

    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int main()
{
    int n; 
    cin>>n;

    //int dp[100] = {0};

    //cout<<Fib_Topdown(n,dp);
    cout<<Fib_bottonmUp(n)<<endl;

    return 0;
}