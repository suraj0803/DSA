#include<iostream>

using namespace std;

int power(int x, int n)
{
    int temp;
    if(n==0)
       return 1;
    temp = power(x,n/2);
    if(n%2==0){
        return temp*temp; // in case of even
    }
    else
        return x*temp*temp; // in case of odd
}

int main()
{
    int x,n;
    cin>>x>>n;

    cout<<"The value is "<<power(x,n);

    return 0;
}