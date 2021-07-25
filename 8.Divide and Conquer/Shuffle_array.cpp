#include<iostream>

using namespace std;

// Fiven an array of 2n integers in the following format a1,a2,a3,a4....an,b1,b2,...bn. 
// Shuffle the array to a1b1,a2b2,....anbn

void swap(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;
}

void shuffle_array(int *arr, int left, int right)
{
    while(left<right){
        int mid = (left+right)/2;

        int temp = mid+1;

        int left_mid = (left+mid)/2;

        for(int i=left_mid+1; i<=mid; i++)
            swap(arr[i],arr[temp++]);
        shuffle_array(arr,left,mid);
        shuffle_array(arr,(mid+1),right);
    }
}

int main()
{
    int arr[] = {1,1,2,2,3,3,4,4,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<shuffle_array(arr,0,n-1);

    return 0;
}