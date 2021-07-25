#include<iostream>
#include<vector>

using namespace std;

class Heap{
    vector<int> v;
    bool minHeap;
    bool compare(int a, int b){
        if(minHeap){
            return a<b;
        }
        else{
            return a>b;
        }
    }

    int heapify(int index)
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
            heapify(min_index);
        }
    }
    public:

    Heap(int default_size=10, bool type= true){
        v.reserve(10);
        v.push_back(-1); // Block the 0th index by putting value -1;
        minHeap = true;
    }

    void insert(int d){
        v.push_back(d); // Insert the data at the last and then compare that element with the parent
        int index = v.size()-1;
        int parent = index/2;

    // Keep pushing to the top till you reach a root node or stop midway because cureent element is greater than parent.
        while(index>1 and compare(v[index],v[parent])){
            // we are using compare so that I can build both min and max heap.
            swap(v[index],v[parent]);
            index=parent;
            parent = parent/2;

        }

    }

    int top(){
        return v[1];
    }

    void pop(){
        int last = v.size()-1;
        swap(v[1],v[last]);
        v.pop_back();
         // first swap the 1st node and the last node and then delete the last node and then balance it by heapify fn.
        heapify(1);
    }

    bool empty(){
        return v.size()-1==0;
    }



};


int main()
{
    Heap h;
    int n;
    cout<<"Enter some elements : ";
    cin>>n;

    for(int i=0; i<n; i++){
        int no;
        cin>>no;
        h.insert(no);
    }
    // remove all the elements one by one
    while(!h.empty()){
        cout<<h.top()<<" ";
        h.pop();
    }


    return 0;
}