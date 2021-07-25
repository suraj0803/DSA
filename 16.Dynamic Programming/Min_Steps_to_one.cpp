#include<iostream>

using namespace std;

// Top Down Approach
int min_steps(int n, int dp[]){
    if(n==1){
        return 0; // we require steps.
    }
    // Recursive steps
    int op1, op2, op3 = INT32_MAX;

    if(n%3==0){
        op1 = min_steps(n/3,dp);
    }
    else if(n%2==0){
        op2 = min_steps(n/2,dp);
    }
    else{
        op3 = min_steps(n-1,dp);
    }

    int ans;
    ans = min(op1,min(op2,op3))+1;
    return dp[n] = ans;
}

// Bottom up approach
int min_steps_BottomUp(int n){
    int op1, op2, op3;
    int dp[100] = {0};

    // Base case
    dp[1] = 0;

    // Recursive case
    for(int i=2; i<=n; i++){
        int op1,op2,op3;
        op1 = op2 = op3 = INT32_MAX;

        if(n%3==0){
            op1 = dp[n/3];
        }
        else if(n%2==0){
            op2 = dp[n/2];
        }
        else{
            op3 = dp[n-1];
        }
        dp[i] = min(op1,min(op2,op3)) + 1;
    }
    return dp[n];
}

int main()
{
    int n;
    cin>>n;

    int dp[100] = {0};

    //cout<<min_steps(n,dp)<<endl;
    cout<<min_steps_BottomUp(n);

    return 0;
}