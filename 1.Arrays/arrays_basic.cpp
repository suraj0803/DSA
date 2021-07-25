#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {1,2,3};

    //Take the input fromfirst element of the array
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }

    // Size of array
    cout<<sizeof(arr);

    // TO find no of elements in a array
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    
    // Print all the elements of an array 
    for(int i=0; i<10; i++)
    {
        cout<<arr[i]<<" ,";
    }
    return 0;
}