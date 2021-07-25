#include<iostream>

using namespace std;

int bubble_sort(int arr[], int j, int n)
{
    //base case
    if(n == 1){
        return -1;
    }
    if(j == n-1){
        return bubble_sort(arr,0,n-1);
    }
    // recursive case
    if(arr[j] > arr[j+1]){
        swap(arr[j],arr[j+1]);
    }
    bubble_sort(arr,j+1,n);
    return ;
}

int main()
{
    int arr[] = {5,4,3,1,2};
    int n = 5;

    cout<<bubble_sort(arr,0,n)<<endl;

    return 0;
}