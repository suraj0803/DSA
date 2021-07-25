#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int> l;

    // Initialised the values
    list<int> l1 = {1,2,3,4,5,6};

    // Different datatype
    list<string> l2 = {"apple","banana","papaya","kivi"};
    l2.push_back("orange");

    // sort
    l2.sort();

    //reverse
    l2.reverse();

    //pop
    l2.pop_front();

    // Iterate over the list and print the data
    for(auto it=l2.begin(); it!=l2.end(); it++){
        cout<<(*it)<<" - ";
    }
    cout<<endl;

    // Some more function
    l2.push_back("carrot");
    l2.push_back("tomato");
    l2.push_back("Mango");


    // remove a fruit
    string f;
    cin>>f;
    l2.remove(f);

    // erase one or more elements from a list --> 2nd element
    auto it = l2.begin();
    it++;
    it++;

    l2.erase(it);

    for(auto x:l2){
        cout<<x<<"->";
    }


    return 0;
}