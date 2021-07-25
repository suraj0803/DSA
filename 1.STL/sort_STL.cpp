#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int> v = {5,9,2,6,5,4};
    sort(v.begin(),v.end());
    for(auto elm:v){
        cout<<elm<<endl;
    }
    return 0;
}