#include<iostream>
#include<cstring>
using namespace std;

//Finding subsequences or subsets in a given sequence
// input : abc  output: "",a,ab,abc,ac,b,bc,c
// Substring are continous and subsets are not continuous.

void filter(char a[], int n)
{
    int j=0;
    while(n>0){
        int last_bit=(n&1);
        if(last_bit==1){
            cout<<a[j];
        }
        j++;
        n=n>>1;
    }
    cout<<endl;
}

void printSubsets(char a[])
{
    int n=strlen(a);
    for(int i=0; i<(1<<n);i++){
        filter(a,i);
    }
    return;

}

int main()
{
    char a[100];
    cin>>a;

    printSubsets(a);

    return 0;
}