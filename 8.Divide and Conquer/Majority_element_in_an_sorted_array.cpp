#include<iostream>

using namespace std;

int MajorityElement(int *arr, int size, int MajorityElement)
{
    int last_index = size%2?(size/2-1):(size/2);
    for(int index=0; index<last_index; index++){
        if(arr[index]==MajorityElement && arr[index+size/2]==MajorityElement){
            return 1;
        }
        return 0;
    }
}

int main()
{
    int arr[] = {1,1,1,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int majorityElement = 1;

    cout<<MajorityElement(arr,n,majorityElement);

    return 0;
}