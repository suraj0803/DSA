#include<iostream>

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

node *buildTree()
{
    int d;
    cin>>d;
    if(d==-1)
       return NULL;
    
    node *root = new node(d);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}

int sizeofTree(node *root){
    return root?(1+sizeofTree(root->left)+sizeofTree(root->right)):0;
}

int main()
{
    node *root = buildTree();

    cout<<sizeofTree(root);

    return 0;
}