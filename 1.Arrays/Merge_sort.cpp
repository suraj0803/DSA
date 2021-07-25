#include<iostream>

using namespace std;

void merge(int *arr, int start, int end){
    int mid = (start+end)/2;

    int i = start;
    int j = mid+1;
    int k = start;// starting of the temp array which will be our final array

    int temp[100];

    while(i<=mid && j<=end){
        if(arr[i]<arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
        while(i<=mid){
            temp[k++] = arr[i++];
        }
        while(j<=end){
            temp[k++] = arr[j++];
        }
    // we need to copy all elements to original array
    for(int i=start; i<=end; i++){
        arr[i]=temp[i];
    }
}
}

void merge_sort(int *arr, int start, int end){
    if(start>=end){
        return;
    }
    // Follow 3 steps
    // 1. Divide
    int mid = (start+end)/2;
    // Recursively the array goes from start---->mid and mid+1----->end
    merge_sort(arr,start,mid);
    merge_sort(arr,mid+1,end);

    // Merge the two parts
    merge(arr,start,end);
}

int main()
{
    int arr[100];
    int n;
    cin>>n;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    merge_sort(arr,0,n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}