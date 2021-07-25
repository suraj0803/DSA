#include<iostream>
#include<algorithm>
#include<list>

using namespace std;

int main()
{
    list<int> l1 = {5,4,2,6,2};
    list<int> l2 = {7,6,1,9};

    l1.reverse();
    l2.swap(l1);
    l1.merge(l2);

    for(auto elm1 : l1){
        cout<<elm1<<" ";
    }
    cout<<endl;

    for(auto elm2 : l2){
        cout<<elm2<<" ";
    }
    cout<<endl;

    return 0;


}