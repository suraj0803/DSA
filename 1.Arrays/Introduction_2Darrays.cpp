#include<iostream>

using namespace std;

int main()
{
    int arr[1000][1000] = {0};
    int m,n;

    cin>>m>>n;

    // Iterate over the arrays.
    int val = 1;

    for(int row=0; row<=m-1; row++){
        for(int column=0; column<=n-1; column++){
            //cin>>arr[row][column];
            arr[row][column] = val;
            val = val + 1;
            cout<<arr[row][column]<<" ";
        }
        cout<<endl;

    }
    return 0;
}