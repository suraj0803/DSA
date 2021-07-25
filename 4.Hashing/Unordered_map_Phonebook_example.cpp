#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main()
{
    unordered_map<string,vector<string>> phonebook;
    phonebook["Rahul"].push_back("9110");
    phonebook["Rahul"].push_back("9210");
    phonebook["Rahul"].push_back("9310");
    phonebook["Kamal"].push_back("8110");
    phonebook["Kamal"].push_back("8210");
    phonebook["Kamal"].push_back("8310");

    for(auto p:phonebook){
        cout<<"Name : " <<p.first<<" ->";
        for(string s:p.second){
            cout<<s<<" ,";
        }
        cout<<endl;
    }

    return 0;
}