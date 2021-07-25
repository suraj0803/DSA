/*Problem Name: Arrays-Sum Of Two Arrays
Problem Difficulty: None
Problem Constraints: Length of Array should be between 1 and 1000.
Problem Description:
Take as input N, the size of array. Take N more inputs and store that in an array. Take as input M, the size of second array and take M more inputs and store that in second array. Write a function that returns the sum of two arrays. Print the value returned.

Input Format: 
Sample Input: 4
1 0 2 9
5
3 4 5 6 7
Output Format: 
Sample Output: 3, 5, 5, 9, 6, END
*/

#include<iostream>

using namespace std;

int print(int num){
    if(num==0){
        return -1;
    }
    print(num/10);
    cout<<num%10;
    cout<<" ,";
}

void Array_sum(int *arr1, int *arr2, int m, int n){
    int fnum, snum;

    for(int i=0; i<m; i++){
        fnum = fnum*10 + arr1[i];
    }

    for(int i=0; i<n; i++){
        snum = snum*10 + arr2[i];
    }

    int sum = fnum + snum;

    print(sum);

    cout<<"END";
}

int main(){
    int arr1[] = {1,0,2,9};
    int arr2[] = {5,6,7,8,9};

    int m = sizeof(arr1)/sizeof(int);
    int n = sizeof(arr2)/sizeof(int);

    Array_sum(arr1,arr2,m,n);

    return 0;
}