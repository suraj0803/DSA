#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
    multimap<char,int> mmap;
    mmap.insert(make_pair('a',1));
    mmap.insert(make_pair('a',2));
    mmap.insert(make_pair('c',3));
    mmap.insert(make_pair('c',4));

    // iterate over mutimap
    // Get all the pairs of given key
    auto range = mmap.equal_range('a');
    for(auto &elm:mmap){
        cout<<elm.first<<" "<<elm.second<<endl;
    }

    return 0;
}