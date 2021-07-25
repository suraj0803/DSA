#include<iostream>

using namespace std;

int binarySearch(int *arr, int size, int target)
{
    int low,mid,high;
    low = 0;
    high = size-1;

    while(low<=high){
        mid = (high+low)/2;
        if(arr[mid]==target)
            return mid;

        if(arr[mid]<target)
           low = mid + 1;
        else
            high = mid -1;          
    }
    return -1;

}

int main()
{
    int n,key;
    cin>>n;
    int arr[1000];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout<<"Enter the element you want to search : ";
    cin >> key;

    cout<<binarySearch(arr,n,key);



    return 0;
}