#include<iostream>

using namespace std;

// Moore Voting Algorithm

int getMajorityElement(int *arr, int n)
{
    int MajorityIndex = 0, count = 1;
    for(int index=1; index<n; index++){
        if(arr[MajorityIndex] == arr[index])
           count++;
        else 
            count--;
        if(count == 0){// when count is 0 then current index is equal to majority index.
            MajorityIndex = index;
            count = 1;
        }
    }
    return arr[MajorityIndex];
}

int isMajorityElement(int *arr,int n, int MajorityIndex)
{
    int count = 0;
    for(int index=0; index<n; index++){
        if(arr[index]==MajorityIndex)
           count++;
        return (count>n/2);
    }

}


int main()
{
    int arr[] = {1,1,1,1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<getMajorityElement(arr,n);

    return 0;
}