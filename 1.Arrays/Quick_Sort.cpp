#include<iostream>

using namespace std;

int partition(int *arr, int start, int end)
{
    //Inplace (Can't use extra array)
    int i = start-1;// i will point to some index -1
    int j = start;
    int pivot = arr[end];

    for(;j<=end-1; j++){
        if(arr[j] <= pivot){
            //merge the element in smaller region
            i=i+1;
            swap(arr[i],arr[j]);
        }
        //expand the larger region
        j = j+1;

    }
    //Place the pivot element in the correct index
    swap(arr[i+1],arr[end]);
    return i+1;

}

void QuickSort(int *arr, int start, int end)
{
    if(start>=end){
        return;
    }
    int pivot = partition(arr,start,end);

    QuickSort(arr,0,pivot);
    QuickSort(arr,pivot+1,end);
}


int main()
{
    int arr[] = {2,7,8,6,1,5,4};
    int n = sizeof(arr)/sizeof(int);

    QuickSort(arr,0,n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}