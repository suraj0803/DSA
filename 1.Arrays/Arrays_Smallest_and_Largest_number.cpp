#include<iostream>
#include<climits> // INT_MAX and INT_MIN for max and min of integer size

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[1000];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // Algorithm to find largest and smallest number
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
        if(arr[i]<smallest){
            smallest = arr[i];
        }
    }

    cout<<"Largest element is : "<<largest<<endl;
    cout<<"Smallest element is :"<<smallest<<endl;

    return 0;


}