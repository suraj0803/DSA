#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v{1,2,3,4,5};
    vector<int> v1 = {2,8,7,6,4};
    vector<int> v3;

    v3.push_back(9);
    v3.push_back(3);
    v3.push_back(12);
    v3.push_back(1);

    //v3.swap(v);
    cout<<v3.capacity()<<endl;
    cout<<v3.size()<<endl;

    for(auto vec:v3){
        cout<<vec<<endl;
    }

    return 0;
}