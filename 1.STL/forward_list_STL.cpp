#include<iostream>
#include<forward_list>
#include<functional>
#include<algorithm>

using namespace std;

int main()
{
    forward_list<int> list1 = {5,4,6,2};
    forward_list<int> list2 = {7,6,1,2};

    list1.sort();
    list2.sort();

    list1.merge(list2);
    list1.unique();
    list1.reverse();

    for(auto elm:list1){
        cout<<elm<<endl;
    }
    return 0;
}