#include<iostream>

using namespace std;

bool Prime_no(int n)
{
    if(n<=1)
      return false;
    
    // Check from 2 to n-1
    for(int i=2; i<n; i++)
        if(n%i==0)
           return false;
        return true;
}

int main()
{
    cout<<Prime_no(11);
    return 0;
}