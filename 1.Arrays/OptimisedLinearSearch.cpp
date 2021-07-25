#include<iostream>

using namespace std;

int LinearSearch(int arr[] , int size , int target)
{
    int index = 0;
    for(int index = 0; index < size; index++)
        if(arr[index] == target)
            return index;
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

    cout<<"Enter the element to be searched : ";
    cin >> key;

    cout<<LinearSearch(arr,n,key);
    
    return 0;

}
/* TIME COMPLEXITY : O(n) */