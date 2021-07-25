#include<iostream>

using namespace std;

int counting_sort(int *arr, int n){
    // largest in the array
    int largest = -1;
    for(int i=0; i<n; i++){
        largest = max(largest,arr[i]);
    }
    // create a frequency array
    int *freq = new int[largest+1]{0};
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    // Put the element back into the array arr by reading freq array
    int j=0;
    for(int i=0; i<=largest; i++){
        while(freq[i]>0){
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }


}

int main()
{
    int arr[] = {2,7,7,6,1,5,4,1,6,6,6};
    int n = sizeof(arr)/sizeof(int);

    counting_sort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}