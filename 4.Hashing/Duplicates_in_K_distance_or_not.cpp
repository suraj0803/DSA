#include<iostream>
#include<unordered_set>
using namespace std;

// Check whether any array contains duplicates in K distance or not.

bool CheckDuplicatesWithinK(int arr[], int n, int k){
    // Create an empty hashset
    unordered_set<int> myset;

    // Traverse the input array
    for(int i=0; i<n; i++){
        // If already present n hash then we found a duplicate within k distance
        if(myset.find(arr[i])!=myset.end())
           return true;
        
        // Add this item to hash set
        myset.insert(arr[i]);

        // Remove the K+1  distant item
        if(i>=k)
            myset.erase(arr[i-k]);
    }
    return false;
}

int main()
{
    int arr[] = {10,5,3,4,3,5,6};
    int n = sizeof(arr)/sizeof(int);
    if(CheckDuplicatesWithinK(arr,n,3))
       cout<<"Yes";
    else  
       cout<<"NO";

    return 0;
}

