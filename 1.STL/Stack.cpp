#include<iostream>
#include<stack>

using namespace std;

void print(std::stack<int> stk)
{
    while(!stk.empty()){
        cout<<stk.top()<<endl;
        stk.pop();
    }

}

int main(){
    stack<int> stk;

    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);

    print(stk);

    return 0;
}