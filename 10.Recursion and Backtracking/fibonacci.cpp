#include<iostream>

using namespace std;

int fib(int n)
{
    if(n==0 || n==1){
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int main()
{
    int n;
    cout<<"Enter the no :";
    cin>>n;

    cout<<"The fibonaaci series of "<<n<<" is "<< fib(n) <<endl;

    return 0;
}