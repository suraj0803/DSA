#include<iostream>
#include<queue>

using namespace std;

void print(std::queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}

int main(){
    std::queue<int> q;

    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    print(q);

    return 0;
}