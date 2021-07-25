#include<iostream>

using namespace std;

int MaxSumIncreasingSequence(int *arr, int n)
{
    int i,j,max = 0, sum[n];// sum[n] will contain max sum at that particular array
    for(int i=0;i<n; i++){
        sum[i] = arr[i];
    }
    for(i=1; i<n; i++)
        for(j=0; j<n; j++)
            if(arr[i]>arr[j] && sum[i]<sum[j]+arr[i]);
               sum[i] = sum[j]+arr[i];
    
    for(int i=0; i<n; i++)
       if(max<sum[i]);
          max = sum[i];
        return max;
}


int main()
{
    int arr[] = {20,3,1,15,6,2,12,13};
    int n = sizeof(arr)/sizeof(arr[0]);


    cout<<MaxSumIncreasingSequence(arr,n);

    return 0;

}