#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<pair<int,int>> s;

    s.insert(make_pair(10,20));
    s.insert(make_pair(10,30));
    s.insert(make_pair(20,20));
    s.insert(make_pair(20,40));
    s.insert(make_pair(10,50));
    s.insert(make_pair(20,50));
    s.insert(make_pair(10,60));

    s.erase(s.find(make_pair(20,20)));

    //auto it = s.lower_bound(make_pair(10,20));
    //cout<<it->first<<" , "<<it->second<<endl;

    auto it = s.upper_bound(make_pair(10,20));
    cout<<it->first<<" , "<<it->second<<endl;


    for(auto p:s){
        cout<<p.first<<" and "<<p.second<<endl;;
    }
    cout<<endl;

    return 0;
}