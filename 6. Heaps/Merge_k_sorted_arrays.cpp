#include<iostream>
#include<queue>
#include<vector>

using namespace std;

typedef pair<int, pair<int,int>> node;// like 6 so pair<elem = 6, pair<idx = 0, elem_index = 1>>

vector<int> mergeKsortedArrays(vector<vector<int>> arr){
    vector<int> res;
    priority_queue<node,vector<node>,greater<node>> pq;

    // insert th 0th element of every array in pq
    for(int i=0; i<arr.size(); i++){//arr.size() = 3
        pq.push({arr[i][0],{i,0}}); // i=1,2,3  0th index of first second and third aray
        
    }


    while(!pq.empty()){
        node current = pq.top();
        pq.pop();

        int element = current.first;
        int x = current.second.first;// row in which element present
        int y = current.second.second;// col in which element present

        result.push_back(element);

        if(y+1<arr[x].size){
            pq.push({arr[x][y+1],{x,y+1}});
        }
    }
    return result;
}

int main()
{
    vector<vector<int>> arr{{2,6,12,15},
                            {1,3,14,20},
                            {3,5,8,10}};

    vector<int> output = mergeKsortedArrays(arr);
    for(auto x:output){
        cout<<x<<" ";
    }

    return 0;
}