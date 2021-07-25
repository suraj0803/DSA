#include<iostream>
#include<set>
#include<string>
#include<functional>

using namespace std;

class Person{
    public:
    string name;
    int age;

    bool operator < (const Person &rhs) const{
        return age<rhs.age;
    }
};

int main()
{
    set<Person> myset={{30,"Kuldeep"},{65,"Rahul"}};

    for(const auto &elm : myset){
        cout<<elm<<endl;
    }
    return 0;

}