#include<iostream>

using namespace std;

int findTrailingZeros(int n){
    int count = 0;
    for(int i=5; n/i>=1; i*=5)// Keep dividing n by power of 5 and update count
        count += (n/i);
    return count;
}

int main()
{

    cout<<"The no of zeros is : "<<findTrailingZeros(100);
    return 0;

}