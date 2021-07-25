#include<iostream>
#include<set>
#include<functional>
#include<string>

using namespace std;

int main()
{
    multiset<int,greater<int>> mset = {5,2,4,3,2,5};
    for(auto const &e : mset){
        cout<<e<<endl;
    }
    return 0;
}