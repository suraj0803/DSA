#include<iostream>

using namespace std;


class Func
{
    public: 
    void operator()(){
        cout<<"Having Fun inside Operator() func.";
    }
};

int main()
{
    Func f;// Constructor
    f();// Overloaded() Operator = Function call f is an object. As it is a object but it is behaving like a functional call.

    return 0;


}