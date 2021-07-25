#include<iostream>

using namespace std;

int maxsum(int arr[], int n){
    int i,j,max=0;
    int dp[100] = {0};

    for(int i=0; i<n; i++){
        dp[i] = arr[i];
    }

    for(i=1; i<n; i++){
        for(j=0; j<n; j++){
            if(arr[i]>arr[j] && dp[i]<dp[j]+arr[i])
               dp[i] = dp[j] + arr[i];
        }
    }
    for(int i=0; i<n; i++){
        if(max<dp[i]){
            max = dp[i];
        }
    }
    return max;
}

int main(){
    int arr[] = {20,3,1,15,16,2,12,13};
    int n = sizeof(arr)/sizeof(int);

    cout<<"Max sum is : "<<maxsum(arr,n);

    return 0;
}