#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the no of elements in array : ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;

    sort(arr,arr+n);

    int target;
    cout<<"Enter the target value : ";
    cin>>target;

    int l=0;
    int r = n-1;
    while(l<r){
        if(arr[l]+arr[r]==target){
           cout<<"Pairs are : "<<arr[l]<<" and "<<arr[r]<<endl;
           l++;
           r--;
        }
        else if(arr[l]+arr[r]<target){
            l++;
        }
        else{
            r--;
        }
    }
    return 0;
}
