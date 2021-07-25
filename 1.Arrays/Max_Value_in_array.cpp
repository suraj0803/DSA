/*Problem Name: Arrays-Max Value In Array
Problem Difficulty: None
Problem Constraints: N cannot be Negative. Range of Numbers can be between -1000000000 to 1000000000
Problem Description:
Take as input N, the size of array. Take N more inputs and store that in an array. Write a function which returns the maximum value in the array. Print the value returned.                                                                                                                                                                                                                                               

1.It reads a number N.

2.Take Another N numbers as input and store them in an Array.

3.calculate the max value in the array and return that value.

Input Format: First line contains integer n as size of array. Next n lines contains a single integer as element of array.
Sample Input: 4
2
8
6
4
Output Format: Print the required output.
Sample Output: 8*/

#include<iostream>

using namespace std;

int Max_Value(int *arr, int n){
    int index, max_so_far = INT16_MIN;
    for(index=0; index<n; index++){
        if(arr[index]>max_so_far)
            max_so_far = arr[index];
    }
    return max_so_far;
}

int main()
{
    int arr[] = {4,12,8,7,19};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<Max_Value(arr,n)<<endl;

    return 0;
}