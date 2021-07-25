#include<iostream>

using namespace std;

// Given an sorted array of non repeated integers arr[1.....n], check whether there is an index i for which arr[i] = i

int binary_search(int *arr, int low, int high){
    if(low<high){
        int mid = (low+high)/2;

        if(mid==arr[mid]){
            return mid;
        }
        if(mid>arr[mid])
           return binary_search(arr,(mid+1),high);
        else 
           return binary_search(arr,low,(mid-1));
    }
    return -1;
}

int main()
{
    int arr[] = {0,2,1,3,5,6,4,9};
    int n = sizeof(arr)/sizeof(int);

    cout<<binary_search(arr,0,n-1);

    return 0;
}

