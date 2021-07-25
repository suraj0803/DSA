#include<iostream>

using namespace std;

// Subarray -> It is part of array and it must contiguous.

int main(){
    int n;
    cin>>n;

    int arr[1000];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    // Generate all subarrays.
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            // Elements of Subarray (i,j)
            for(int k=i; k<=j; k++){
                cout << arr[k] << " , ";
            }
            cout << endl;
        }
    }

    return 0;

}