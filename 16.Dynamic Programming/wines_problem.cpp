#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

int Max_Profit_BottomUp(int wines[], int i, int j, int y,int dp[][100])
{
    // Base Case
    if(i>j){
        return 0;
    }
    //Look Up
    if(dp[i][j]!=0){
        return dp[i][j];
    }
    // Recursive case
    int op1 = wines[i]*y + Max_Profit_BottomUp(wines,i+1,j,y+1,dp);
    int op2 = wines[j]*y + Max_Profit_BottomUp(wines,i,j-1,y+1,dp);

    return dp[i][j] = max(op1,op2);


}



int main()
{
    int wines[] = {2,3,5,1,4};
    int n = sizeof(wines)/sizeof(int);
    int y = 1;
    int dp[100][100] = {0};

    cout<<Max_Profit_BottomUp(wines,0,n-1,y,dp);

    return 0;
}