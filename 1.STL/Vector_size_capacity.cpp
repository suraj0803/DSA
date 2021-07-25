#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> vec;
    vec.reserve(1000);

    for(int i=0; i<32; i++)
        vec.push_back(i);
    cout<<"Vector size is : "<<vec.size()<<" Vector capacity is : "<<vec.capacity()<<endl;

    return 0;
}