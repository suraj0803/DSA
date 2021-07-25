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
}

int CheckIdenticalTrees(node *root1, node *root2){
    if(!root1 && !root2)
       return 1;
    
    if(root1 && root2){
        return (root1->data == root2->data)&&CheckIdenticalTrees(root1->left,root2->left)&&CheckIdenticalTrees(root1->right,root2->right);
    }
    return 0;
}

int main()
{
    node *root1 = buildTree();
    node *root2 = buildTree();

    cout<<CheckIdenticalTrees(root1,root2);

    return 0;
}