#include<iostream>

using namespace std;


int All_Occurence(int *arr, int i, int n, int key)
{   
    //Base case
    if(i == n){
        return -1;
    }
    if(arr[i] == key){
        cout<<i<<" ";
    }
    All_Occurence(arr,i+1,n,key);
}

int main()
{
    int arr[] = {1,2,3,7,4,5,6,7,10};
    int key = 7;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<All_Occurence(arr,0,n,key)<<endl;

    return 0;
}