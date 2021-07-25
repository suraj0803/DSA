/* Problem Name: Maximum Subarray Sum
Problem Difficulty: None
Problem Constraints: 1 <= N <= 100000

1 <= t <= 20

â€¨-100000000 <= A[i] <= 100000000
Problem Description:
You are given a one dimensional array that may contain both positive and negative integers, find the sum of contiguous subarray of numbers which has the largest sum. For example, if the given array is {-2, -5, 6, -2, -3, 1, 5, -6}, then the maximum subarray sum is 7. 

Input Format: The first line consists of number of test cases T. Each test case consists of two lines. <br>
The first line of each testcase contains a single integer N denoting the number of elements for the array A. <br> 
The second line of each testcase contains N space separated integers denoting the elements of the array.
Sample Input: 2
4
1 2 3 4
3
-10 5 10
Output Format: Output a single integer denoting the maximum subarray sum for each testcase in a new line.
Sample Output: 10
15
*/

#include<iostream>

using namespace std;

int Max_Subarray(int *arr, int n){
    int max_so_far = INT16_MIN, sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(max_so_far<sum)
            max_so_far = sum;

        if(sum<0)
           sum = 0;
    }
    return max_so_far;
}

int main(){
    int arr[] = {-10,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<Max_Subarray(arr,n)<<endl;

    return 0;
}