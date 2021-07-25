#include<iostream>
using namespace std;

void swap(char *a, char *b){
    char temp = *a;
    *a = *b;
    *b = temp;
}

int partition(char *arr, int start, int end, char pivot){
    int index = start;
    for(int index2 = start; index2<end; index2++){
        if(arr[index2]<pivot)
           swap(&arr[index2],&arr[index++]);
        else if(arr[index2]==pivot)
            swap(&arr[index2--], &arr[end]);
    }
    swap(&arr[index] , &arr[end]);
    return index;
}

void match_Nuts_Bolts(char *nuts, char*bolts, int start, int end)
{
    if(start<end){
        int pivot = partition(nuts,start,end,bolts[end]);// this will match one nut
        partition(bolts,start,end,nuts[pivot]);// with one bolt and start compare others respectively.
        match_Nuts_Bolts(nuts,bolts,start,pivot-1);
        match_Nuts_Bolts(nuts,bolts,pivot+1,end);
    }
}

void print(char *arr, int size)
{
    for(int index=0; index<size; index++){
        cout<<arr[index]<<" ";
    }
}



int main(){
    char nuts[] = {'@', '#', '$', '%', '^', '&'};
    char bolts[] = {'$', '%', '&', '^', '@', '#'};

    int size = 6;

    match_Nuts_Bolts(nuts,bolts,0,size-1);

    print(nuts,size);
    print(bolts,size);

    return 0;

}