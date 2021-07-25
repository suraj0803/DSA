// Print N nos in decreasing or increasing order
#include<iostream>

using namespace std;

void dec(int n)
{
    //base case
    if(n == 0){
        return;
    }
    cout<< n <<" ";
    dec(n-1);
}

void inc(int n){
    // base case
    if(n == 0){
        return;
    }
    //recursive case
    inc(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cin>>n;

    dec(n);
    cout<<endl;

    inc(n);
    cout<<endl;

    return 0;

}