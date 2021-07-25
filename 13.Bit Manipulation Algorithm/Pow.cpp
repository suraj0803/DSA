/*Problem Name: Power(O(logn))
Problem Difficulty: None
Problem Constraints: None
Problem Description:
Take as input x and n, two numbers. Write a function to calculate x raise to power n. Target complexity is O(logn).
NOTE: Try both recursive and bitmasking approach.

Input Format: Enter the number N and its power P
Sample Input: 2
3
Output Format: Display N^P
Sample Output: 8
*/

#include<iostream>

using namespace std;

float pow(float x, int n){
    float temp;
    if(n==0){
        return 1;
    }

    temp = pow(x,n/2);
    if(n%2==0){
        return temp*temp;
    }
    else{
        if(n>0){
           return x*temp*temp;
        }
        else{
           return (temp*temp)/x;
        }
    }
}

int main(){
    int x,n;
    cout<<"Enter the value of x and n : ";
    cin>>x>>n;

    cout<<"The value is : "<<pow(x,n);

    return 0;
}