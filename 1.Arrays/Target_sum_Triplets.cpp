/*Problem Name: Arrays-Target Sum Triplets
Problem Difficulty: None
Problem Constraints: Length of Array should be between 1 and 1000.
Problem Description:
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input â€œtargetâ€, a number. Write a function which prints all triplets of numbers which sum to target.

Input Format: First line contains input N. <br> Next line contains N space separated integers denoting the elements of the array. <br> The third line contains a single integer T denoting the target element.
Sample Input: 9
5 7 9 1 2 4 6 8 3
10
Output Format: Print all the triplet present in the array in a new line each. The triplets must be printed as A, B and C where A,B and C are the elements of the triplet ( A<=B<=C) and all triplets must be printed in sorted order. Print only unique triplets.
Sample Output: 1, 2 and 7
1, 3 and 6
1, 4 and 5
2, 3 and 5*/

#include<iostream>
#include<algorithm>
#include<functional>

using namespace std;

int Triplet_sum(int *arr, int n, int sum){
    int l=0;
    int r = n-1;

    sort(arr,arr+n);

    for(int i=0; i<n; i++){
        while(l<r){
            if(arr[i]+arr[l]+arr[r]==sum){
                cout<<"Triplets are : "<<arr[i]<<" ,"<<arr[l]<<" ,"<<arr[r]<<endl;
                l++;
                r--;
            }
            else if(arr[i]+arr[l]+arr[r]<sum){
                l++;
            }
            else{
                r--;
            }
        }
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 6;

    Triplet_sum(arr,n,sum);

    return 0;
}