#include<iostream>
#include<queue>

using namespace std;

// Join opes with min cost

int join_ropes(int ropes[], int n)
{
    priority_queue<int, vector<int>, greater<int>> pq(ropes,ropes+n); // greater for min heap
    // if we use pq(ropes,ropes+n) this type of initialization then we do not need to insert to priority queue
    
    int cost = 0;

    while(pq.size()>1){
        int A = pq.top();
        pq.pop();

        int B = pq.top();
        pq.pop();

        int new_rope = (A+B);

        cost += new_rope;

        pq.push(new_rope);
    }
    return cost;
}

int main()
{
    int ropes[] = {4,3,2,6};
    int n = sizeof(ropes)/sizeof(int);

    cout<<join_ropes(ropes,n)<<endl;

    return 0;
}