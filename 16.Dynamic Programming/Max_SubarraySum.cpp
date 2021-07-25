#include<iostream>

using namespace std;

int maxSum(int arr[], int n){
    int index;
    int max_so_far=0, curr_sum=0;
    for(index=0; index<n; index++){
        curr_sum += arr[index];
        if(curr_sum<0)
           curr_sum = 0;
        else if(max_so_far<curr_sum)
            max_so_far = curr_sum;
    }
    return max_so_far;
}

int main()
{
    int arr[] = {-3,2,5,-1,6,3,-2,7,-5,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<maxSum(arr,n)<<endl;

    return 0;
}