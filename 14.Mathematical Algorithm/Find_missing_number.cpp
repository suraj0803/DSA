#include<iostream>

using namespace std;

int getMissingNo(int *arr, int n)
{
    int total = ((n+1)*(n+2))/2;
    for(int i=0; i<n; i++)
        total -= arr[i];
    return total;
}

int main()
{
    int arr[] = {1,2,4,6,3,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<"Missing no is : "<<getMissingNo(arr,n);

    return 0;
}