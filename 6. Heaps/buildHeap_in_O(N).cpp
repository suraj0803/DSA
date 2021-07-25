#include<iostream>
#include<vector>

using namespace std;

void print(vector<int> v){
    for(int x:v){
        cout<<x<<" ";
    }
    cout<<endl;
}

bool minHeap = false;
bool compare(int a, int b){
    if(minHeap){
        return a<b;
    }
    else{
         return a>b;
        }
    }

int heapify(vector<int> &v, int index)
{
    int left = 2*index;
    int right = 2*index+1;

    int min_index = index;
    int last = v.size()-1;

    if(left <= last and compare(v[left],v[index])){
        min_index = left;
    }

    if(right <= last and compare(v[right],v[index])){
        min_index = right;
    }

    if(min_index!=index){
        swap(v[index],v[min_index]);
        heapify(v,min_index);
    }
}

void buildHeap(vector<int> &v)
{
    for(int i=(v.size()-1/2); i>=1; i--){// start from 1st non leaves and then heapify
        // root node is fixed
        heapify(v,i);

}

int main()
{

    vector<int> v{-1,10,20,5,6,18,9,4};// 0th index is blocked so starting from index 1
    print(v);
    buildHeap(v);
    print(v);

    return 0;
}