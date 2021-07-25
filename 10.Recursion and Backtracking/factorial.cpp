#include<iostream>

using namespace std;

int fact(int n) // Write two case
{
    // Base Case
    if(n==0){
        return 1;
    }
    //Recursive case
    return n*fact(n-1);
}
int main(){
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<" The factorial of "<<n<<" is "<<fact(n)<<endl;

    return 0;
}