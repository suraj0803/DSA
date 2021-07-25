#include<iostream>

using namespace std;

void isOdd(int num){// xor
    if(num&1){
        cout<<"No is odd";
    }
    else{
        cout<<"No is even";
    }
}

int GetBit(int num, int i)//and
{
    int mask = 1<<i;
    int bit = (num & mask)>0?1:0;
    return bit;
}

int SetBit(int num,int i)//or
{
    int mask = 1<<i;
    int ans = (num | mask);
    return ans;
}
int main()
{
    int num;
    cin>>num;

    int i;
    cin>>i;

    //isOdd(num);
    //cout<<GetBit(num,i);
    //cout<<SetBit(num,i);

    return 0;
}