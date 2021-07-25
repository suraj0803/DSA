#include<iostream>

using namespace std;

bool is_sorted(int arr[], int n){
    //base case
    if(n == 0 or n== 1){
        return true;
    }
    //recursive case
    if(arr[0]<arr[1] and is_sorted(arr+1,n-1)){
        return true;
    }
    return false;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<is_sorted(arr,n);


    return 0;

}