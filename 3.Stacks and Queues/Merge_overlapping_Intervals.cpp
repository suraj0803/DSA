#include<iostream>
#include<stack>
#include<algorithm>

using namespace std;

struct Interval{
    int start,end;
};

bool compareInterval(Interval i1, Interval i2){
    return (i1.start < i2.start);
}

void mergeIntervals(Interval arr[] , int n)
{
    // Test if the given set has one interval
    if(n<=0)
       return;

    // Create an empty stack of intervals
    stack<Interval> s;
    sort(arr,arr+n,compareInterval);
    // Push the first interval to stack
    s.push(arr[0]);
    // start from next interval and merge if necessary
    for(int i=1; i<n; i++){
        // get interval from stack top
        Interval top = s.top();
        // if the current element is not overlapping with stack top then push it to the stack
        if(top.end<arr[i].end)
           s.push(arr[i]);
        
        // otherwise update the ending time of top if ending time of curr is more
        else if(top.end < arr[i].end){
            top.end = arr[i].end;
            s.pop();
            s.push(top);
        }
    }
    // print content of stack
    cout<<"The merged intervals are :";
    while(!s.empty()){
        Interval t = s.top();
         cout << "[" << t.start << "," << t.end << "] ";
        s.pop();
    }
    return;
}

int main()
{
    Interval arr[] =  { {6,8}, {1,9}, {2,4}, {4,7} };
    int n = sizeof(arr)/sizeof(arr[0]);
    mergeIntervals(arr, n);
    return 0;
}