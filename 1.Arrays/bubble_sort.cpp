#include<iostream>

using namespace std;

bool compare(int a, int b){
    cout << " Compairing " << a << " and " << b <<endl;
    return a>b;
}

// Bubble Sort

void bubble_sort(int *arr, int n, bool (&cmp)(int a, int b))// syntax to pass a function as a parameter.
{
    //move n-1 large elements to the end
    int i,j;
    for(int i=0; i<n; i++){
        //Pairwise Swapping in the unsorted of the array.
        for(j=0; j<n-i-1; j++)
        {
            if(cmp(arr[j],arr[j+1])){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n;
    cin >> n;

    int arr[1000];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    bubble_sort(arr,n,compare);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ,";
    }

    return 0;

}