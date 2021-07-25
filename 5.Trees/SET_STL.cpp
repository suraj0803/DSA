#include<iostream>
#include<set>

using namespace std;

int main()
{
    int arr[] = {10,11,4,5,6,8,6,5,11,10};
    int n = sizeof(arr)/sizeof(arr[0]);

    set<int> s;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }

    // erase element
    s.erase(10);

    // Another way to erase element
    auto it = s.find(11);
    s.erase(it);

    //Print the elements of the set.
    for(set<int>::iterator it=s.begin(); it!=s.end(); it++){
        cout<<(*it)<<" ";
    }
    cout<<endl;

    return 0;
}