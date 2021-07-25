#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

    node(int d){
        data = d;
        left = NULL;
        right = NULL;
    }
};



node * buildBalancedTreeFromArray(int *arr, int start, int end){
    if(start>end){
        return 0;
    }
    //Recursive case
    int mid = (start+end)/2;
    node *root = new node(arr[mid]);
    root->left = buildBalancedTreeFromArray(arr,0,mid-1);
    root->right = buildBalancedTreeFromArray(arr,mid+1,end);
    return root;
}

void bfs(node *root){
    queue<node *> q;
    q.push(root);

    while(!q.empty()){
        node * f = q.front();
        cout<<f->data<<" ,";
        q.pop();
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }

    }
    return;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = 0;
    int end = n-1;
    node *root = buildBalancedTreeFromArray(arr,start,end);
    bfs(root);

    return 0;
}
