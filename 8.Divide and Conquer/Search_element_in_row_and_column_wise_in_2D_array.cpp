#include<iostream>

using namespace std;

int search(int arr[4][4], int n, int x)
{
    int i=0, j=n-1;
    while(i<n && j>=0)
    {
        if(arr[i][j]==x){
            cout<<"Found element at "<<i<<" and "<<j;
            return 1;
        }
        if(arr[i][j]>x)
           j--;
        else 
            i++;
    }
    cout<<"Element not found";
}

int main()
{
    int arr[4][4] = { {10, 20, 30, 40},
                      {15, 25, 35, 45},
                      {27, 29, 37, 48},
                      {32, 33, 39, 50}};
    int n = 4;
    int x = 29;

    search(arr,n,x);
    return 0;
}