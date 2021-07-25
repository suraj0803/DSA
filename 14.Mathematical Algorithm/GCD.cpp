/*Problem Name: GCD
Problem Difficulty: None
Problem Constraints: 0 < N1 < 1000000000 <br>
0 < N2 < 1000000000
Problem Description:
Take the following as input.

A number (N1)  
A number (N2)  
Write a function which returns the GCD of N1 and N2. Print the value returned.

<img src="https://image.flaticon.com/icons/svg/2421/2421003.svg"
 width=200px>

Input Format: Two integers seperated by a new line.
Sample Input: 16 
24
Output Format: Output a single integer which is the GCD of the given integers.
Sample Output: 8
*/

#include<iostream>

using namespace std;

int gcd(int a, int b){
    return b==0?a:gcd(b,a%b);
}

int main()
{
    int n1, n2;
    cin>>n1>>n2;

    cout<<gcd(n1,n2)<<endl;

    return 0;
}