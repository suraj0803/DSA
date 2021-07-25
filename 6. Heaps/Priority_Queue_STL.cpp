#include<iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int> pq;
    int n;
    cin>>n;

    for(int i=1; i<n; i++){
        int no;
        cin>>no;
        pq.push(no);// O(Logn)

        while(!pq.empty()){
            cout<<pq.top()<<" ";
            pq.pop();

        }
    }
    return 0;
}