#include<iostream>

using namespace std;

// 1. Count no. of nodes.
// 2. Count sum of all nodes.

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

node *buildtree()
{
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    node *root = new node(d);
    root->left = buildtree();
    root->right = buildtree();
    return root;
}

int count(node * root){
    if(root==NULL){
        return NULL;
    }
    return 1+count(root->left)+count(root->right);
}

int sum(node *root){
    int Total = 0;
    if(root==NULL){
        return NULL;
    }
    Total += root->data+sum(root->left)+sum(root->right);
    return Total;
}


int main()
{
    node *root = buildtree();

    cout<<count(root);
    cout<<sum(root);

    return 0;
}
