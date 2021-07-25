#include<iostream>
#include<map>
#include<functional>
#include<string>

using namespace std;

int main()
{
    std::map<string,int> Map;
    Map["Kullu"] = 954921254;
    Map["rahul"] = 785451125;

    Map.insert(make_pair("Akshay",16814631));

    // Loop through map
    for(auto &el1 : Map){
        cout<<el1.first<<" "<<el1.second<<endl;
    }

    // Access using [] operator
    cout<<Map["rahul"]<<endl;

    return 0;
}