/*Problem Name: Arrays-Target Sum Pairs
Problem Difficulty: None
Problem Constraints: Length of the arrays should be between 1 and 1000.
Problem Description:
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input â€œtargetâ€, a number. Write a function which prints all pairs of numbers which sum to target.

Input Format: The first line contains input N. Next N lines contains the elements of array and (N+1)th line contains target number.
Sample Input: 5
1
3
4
2
5
5
Output Format: Print all the pairs of numbers which sum to target. Print each pair in increasing order.
Sample Output: 1 and 4
2 and 3*/

#include<iostream>

using namespace std;

int Target_Sum(int *arr, int n, int target){
    int i,j;
    for(i=0; i<n; i++)
        for(j=1; j<n; j++)
            if(arr[i]+arr[j]==target)
                cout<<"Pairs are "<<arr[i]<<" and "<<arr[j]<<endl;
    return 0;
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;

    Target_Sum(arr,n,target);

    return 0;
}
