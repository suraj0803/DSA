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

void heapify(vector<int> &v, int index, int size)
{
    int left = 2*index;
    int right = 2*index+1;

    int min_index = index;
    int last = size-1;

    if(left <= last and compare(v[left],v[index])){
        min_index = left;
    }

    if(right <= last and compare(v[right],v[index])){
        min_index = right;
    }

    if(min_index!=index){
        swap(v[index],v[min_index]);
        heapify(v,min_index,size);
    }
}

void buildHeap(vector<int> &v)
{
    for(int i=(v.size()-1/2); i>=1; i--){// start from 1st non leaves and then heapify
        // root node is fixed
        heapify(v,i,v.size());
    }

}

void heapsort(vector<int> &arr){
    buildHeap(arr);
    int n = arr.size();

    //remove n-1 elements from the top
    while(n>1){
        swap(arr[1],arr[n-1]);
        // remove that element from the heap
        n--;// here we are just shrinking the size and we actually popping the element.
        heapify(arr,1,n);
    }
}

int main()
{

    vector<int> v;
    v.push_back(-1);

    int n;
    cin>>n;

    int temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        v.push_back(temp);
    }

    heapsort(v);
    print(v);

    return 0;
}