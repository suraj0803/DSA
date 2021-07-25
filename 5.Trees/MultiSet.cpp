#include<iostream>
#include<set>

using namespace std;

typdef multiset<int>::iterator It;
int main()
{
    // Multiset - that can store multiple elements that have same elements
    // stored in a specific -> sorted according to internal comparison sort
    // value once inserted can't be modified
    // associative container -> elements are referred by their value not by index
    // Underlying data structure --> BST

    int arr[] = {10,20,10,10,30,20};
    multiset<int> m(arr,arr+6);
    int n = sizeof(arr)/sizeof(int);

    // erase
    m.erase(20);

    // insert
    m.insert(80);

    // Iterate
    for(auto x:m){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<m.count(10)<<endl;

    //find
    auto it = m.find(80);
    cout<<(*it)<<endl;

    // Get all elements which are equal to 10
    pair<It,It> range = m.equal_range(10);
    for(auto it = range.first; it!=range.second; it++){
        cout<<(*it)<<endl;
    }

    return 0;
}