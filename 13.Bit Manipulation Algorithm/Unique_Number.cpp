/*Problem Name: Unique Number - I
Problem Difficulty: None
Problem Constraints: n < 10^5
Problem Description:
We are given an array containg n numbers. All the numbers are present twice except for one number which is only present once. Find the unique number without taking any extra spaces and in linear time. ( Hint - Use Bitwise )

Input Format: First line contains the number n. Second line contains n space separated number.
Sample Input: 7
1 1 2 2 3 3 4 
Output Format: Output a single line containing the unique number
Sample Output: 4
*/

#include<iostream>

using namespace std;

int UniqueNo(int *arr, int n){
    int res = 0;
    for(int index = 0; index<n; index++){
        res ^= arr[index];
    }
    return res;
}

int main()
{
    int arr[] = {2,3,4,5,4,3,2};
    int n = sizeof(arr)/sizeof(int);

    cout<<"The unique no is : "<<UniqueNo(arr,n);

    return 0;
}