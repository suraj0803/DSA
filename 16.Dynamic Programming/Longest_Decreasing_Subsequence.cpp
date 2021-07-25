#include<iostream>

using namespace std;

int DIS(int arr[], int n){
    int dp[100] = {0};
    int maxlen=0, i, j;
    for(int i=0; i<n; i++){
        dp[i] = 1;
    }

    for(i=n-2; i>=0; i++){
        for(j=n-1; j>1; j--){
            if(arr[i]>arr[j] && dp[i]<dp[j])
               dp[i] = dp[j]+1;
        }
    }
    for(int i=0; i<n; i++){
        if(maxlen<dp[i])
           maxlen = dp[i];
    }
    return maxlen;
}

int main()
{
    int arr[] = {2,10,11,5,3,4,12,1};
    int n = sizeof(arr)/sizeof(int);

    cout<<DIS(arr,n);

    return 0;
}