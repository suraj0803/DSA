#include<iostream>

using namespace std;


int First_Occurence(int *arr, int n, int key)
{   
    //Base case
    if(n==0){
        return -1;
    }
    //recursive case
    if(arr[0] == key){
        return 0;
    }
    int i = First_Occurence(arr+1,n-1,key);
    if(n == -1){
        return -1;
    }
    return i+1;

}

int main()
{
    int arr[] = {1,2,3,7,4,5,6,7,10};
    int key = 7;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<First_Occurence(arr,n,key)<<endl;

    return 0;
}