#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> v){
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
}

void buildHeap(vector<int> &v)
{
    for(int i=2; i<v.size(); i++){ // root node is fixed
        int index = i;
        int parent = i/2;

        while(index>1 && v[index]>v[parent]){
            swap(v[index],v[parent]);
            index = parent;
            parent = parent/2;        
        }
    }

}

int main(){

    vector<int> v{-1,10,20,5,6,18,9,4};// 0th index is blocked so starting from index 1
    print(v);
    buildHeap(v);
    print(v);

    return 0;
}