#include<iostream>

using namespace std;

int getFirstOne(int *arr, int start, int end)
{
    if(start<end){
        int middle = (start+end)/2;
        if(middle==1 || arr[middle-1]==0 && arr[middle]==1)
           return middle;
        return (arr[middle]==0)?getFirstOne(arr,(middle+1),end):getFirstOne(arr,start,(middle-1));
    }
}

int main()
{
    int arr[] = {0,0,0,0,0,1,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"The first one appears at index : "<<getFirstOne(arr,0,n);

    return 0;
}