#include<iostream>

using namespace std;

int findMaxElement(int heap[], int size)
{
    int max = INT16_MIN, index;
    for(index = (size+1)/2; index<size; index++)
        if(heap[index]>max)
           max = heap[index];
        return max;
}

int main(){
    int n=10;

    int heap[] = {10,25,23,45,50,30,35,63,65,81};

    cout<<findMaxElement(heap,n);

    return 0;
}