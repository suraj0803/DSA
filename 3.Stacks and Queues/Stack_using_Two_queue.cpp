#include<iostream>

using namespace std;

// Implementation of a stack using two queues

template<typename T>
class Stack{
    queue<T> q1,q2;
    public:
    void push(T x){
        q1.push(x);
    }

    void pop(){
        // remove the last added element from the q1
        // we have to move first n-1 elements in q2
        // interchange the name of q1 and q2
        if(q1.empty()){
            return;
        }
        while(q1.size()>1){
            T element = q1.front();
            q2.push(element);
            q1.pop();
        }
        // remove the last element
        q1.pop();

        // swap the name of q1 and q2
        swap(q1,q2);
    }

    T top(){
    while(q1.size()>1){
        T element = q1.front();
        q2.push(element);
        q1.pop();
        }

    // 1st element in q1
    T element = q1.front();
    q1.pop();
    q1.push(element);

    swap(q1,q2);
    return element;

    }

    T size(){
        return q1.size() + q2.size();
    }

    T empty(){
        return size()==0;
    }
};

int main(){

    Stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);


    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}