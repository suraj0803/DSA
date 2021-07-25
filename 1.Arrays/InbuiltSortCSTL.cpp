#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){// this we use here to sort the array either in ascending order or descending order.
    cout<<"Compairing " << a << " and " << b <<endl;
    return a>b; // descending order.
}

int main()
{
    int n;
    cin >> n;

    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sort the array using sort() function defined in algorithm header
    sort(arr,arr+n, compare); // parameters are start index and ending index of the array.


    for(int i=0; i<n; i++){
        cout << arr[i] <<" ,";
    }
    
    return 0;
    
}