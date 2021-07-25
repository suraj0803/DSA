#include<iostream>

using namespace std;

void EquilibriumIndex(int *arr, int size)
{
    int index, leftsum = 0, sum = 0;
    //calculate the sum of whole array
    for(index=0; index<size; index++)
        sum += arr[index];
    for(index = 0; index<size; index++)
        sum-= arr[index];
        if(leftsum == sum)
           cout<<"Equilibrium index is : "<<index;
        leftsum += arr[index];
}

int main()
{
    int arr[] = {10,5,15,3,4,21,2};
    int size = sizeof(arr)/sizeof(arr[0]);

    EquilibriumIndex(arr,size);

    return 0;
}