#include<iostream>
#include<queue>
#include<vector>
using namespace std;

int findMinimumCost(int arr[], int n) {
   //priority queue is set as whose value is bigger, have higher priority
   priority_queue<int,vector<int>,greater<int>> queue(arr,arr+n);

   int min_cost=0;

   while(queue.size()>1){
       int item1 = queue.top();
       queue.pop();

       int item2 = queue.top();
       queue.pop();

       min_cost += item1+item2;
       queue.push(item1+item2);
   }
   return min_cost;
}
int main() {
   int ropeLength[] = {4, 3, 2, 6, 5, 7, 12};
   int n = 7;
   cout << "Total minimum cost: " << findMinimumCost(ropeLength, n);
}