#include<iostream>

using namespace std;

void clearBit(int &n, int i)
{
    int mask = ~(1<<i);
    n = (n&mask);
}

void update(int &n, int i, int v)
{
    int mask = ~(1<<i);
    int cleared_n= n&mask;
    n = cleared_n|(v<<i);

}

int main()
{
    int n=5;
    int i;
    cin>>i;

    //clearBit(n,i);
    //cout<<n<<endl;
    // update the 4th bit in 5
    update(n,4,1);
    cout<<n<<endl;
    
    return 0;
}