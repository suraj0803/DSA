#include<iostream>

using namespace std;

// Bottom down Approch

int fib(int n)
{
    int dp[100] = {0};
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

    cout<<fib(n);

    return 0;

}