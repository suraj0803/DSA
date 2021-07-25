#include<iostream>

using namespace std;

// Given a no N, find the no of set bits bresent in  its represenation.
// N = 13 binary rep--> 1101 output: 3

int count(int n)
{
    int ans = 0;
    while(n>0){
        ans += (n&1);
        n = n>>1;
    }
    return ans;
}

int countSetBitsFast(int n)
{
    int ans = 0;
    while(n>0){
        n = n&(n-1);
        ans++;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;

    cout<<count(n)<<endl;
    cout<<countSetBitsFast(n)<<endl;


    return 0;
}