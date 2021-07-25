#include<iostream>

using namespace std;

int PeakIndex(int *arr, int size, int left, int right)
{
    int middle = (left+right)/2;
    if(middle==0 || arr[middle-1]<arr[middle] && (middle==size-1 || arr[middle+1])<=arr[middle])
       return middle;
    else 
        return (middle>0 && arr[middle-1]>arr[middle])?PeakIndex(arr,size,left,middle):PeakIndex(arr,size,(middle+1),right);
}

int main()
{
    int arr[] = {1,2,3,9,5,4,3,2,1};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"The Peak index is : "<<PeakIndex(arr,size,0,size-1);

    return 0;
}