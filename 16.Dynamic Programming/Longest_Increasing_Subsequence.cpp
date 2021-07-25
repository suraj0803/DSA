#include<iostream>

using namespace std;

int LIS(int arr[], int n){
    int dp[100] = {0};
    int i,j,maxlen=0;

    for(int i=0; i<n; i++){
        dp[i] = 1;
    }

    for(i=1; i<n; i++){
        for(j=0; j<n; j++)
            if(arr[i]>arr[j] && dp[i]<dp[j]+1)
               dp[i] = dp[j]+1;
    }
    for(int i=0; i<n; i++){
        if(maxlen<dp[i])
           maxlen = dp[i];
    }
    return maxlen;
}

int main()
{
    int arr[] = {2,3,1,5,12,10,11};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"The Longest sequence of length is "<<LIS(arr,n);

    return 0;
}