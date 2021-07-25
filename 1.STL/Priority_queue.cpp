#include<iostream>
#include<queue>
#include<vector>
#include<functional>

using namespace std;

template<typename T>
void print_queue(T &q){
    while(!q.empty()){
        cout<<q.top()<<endl;
        q.pop();
    }
    cout<<endl;
}

int main()
{
    priority_queue<int> q;
    for(int elm: {1,8,5,6,3,4,0,9,7,2}){
        q.push(elm);
    }
    print_queue(q);

    return 0;
}
