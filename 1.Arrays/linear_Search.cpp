#include<iostream>
using namespace std;

int main()
{
    int n, key;
    int arr[1000] = {0};
    cout<<"Enter the no of elements :";
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ,";
    }

    cout<<"Enter the key to be searched : ";
    cin >> key;

    for(int i=0; i<n-1; i++)
    {
        if(arr[i]==key){
            cout << key <<" is found at "<< i << "index." <<endl;
        }
    }

    return 0;

}