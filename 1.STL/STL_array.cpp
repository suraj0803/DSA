#include<iostream>
#include<array>

using namespace std;

int main()
{
    // Declaration and Initialization
    array<int,5> arr{1,2,3,4,5}; // uniform initialization
    array<int,6> arr2 = {6,5,8,9,5,2}; // Initializer list
    
    cout<<arr.at(3)<<endl;
    cout<<arr[2]<<endl;

    cout<<arr.front()<<endl;
    cout<<arr2.back()<<endl;
    cout<<arr.data()<<endl;

    return 0;

}