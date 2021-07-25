/*Problem Name: Playing With Bits
Problem Difficulty: 1
Problem Constraints: Q,a,b are integers.
Problem Description:
Prateek Bhayia likes to play with bits. One day Prateek bhayia decides to assign a task to his student Sanya. You have help Sanya to complete this task. Task is as follows - Prateek Bhayia gives Q queries each query containing two integers a and b. Your task is to count the no of set-bits in for all numbers between a and b (both inclusive) 

Input Format: Read Q - No of Queries, Followed by Q lines containing 2 integers a and b.
Sample Input: 2
1 1
10 15
Output Format: Q lines, each containing an output for your query.
Sample Output: 1
17

*/

#include<iostream>

using namespace std;

int count_setbits(int num){
    int count = 0;
    while(num){
        count += (num&1);
        num >>= 1;
    }
    return count;
}

int main()
{
    int num;
    cout<<"Enter the num : ";
    cin>>num;

    cout<<"The no of setbits is : "<<count_setbits(num);

    return 0;
}