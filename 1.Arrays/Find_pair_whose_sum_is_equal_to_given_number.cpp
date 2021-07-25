#include<iostream>
#define MAX 10
using namespace std;
// Hash Table approach

void pair_Sum(int *arr, int n, int sum)
{
    int index, temp;
    int hash[MAX] = {0};

    for(index = 0; index<n; index++){
        temp = sum - arr[index];
        if(temp>=0 && hash[temp]==1)
            cout<<"Pair with given "<<sum<<" is "<<arr[index]<<temp;
        hash[arr[index]]=1;
    }
}

int main()
{
    int arr[] = {1,2,10,6,9,11,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 9;

    pair_Sum(arr,n,sum);

    return 0;
}

