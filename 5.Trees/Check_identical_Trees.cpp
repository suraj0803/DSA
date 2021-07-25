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

int Check_Identical_trees(node *root1, node *root2){
    if(!root1&&!root2){
        return 1;
    }
    if(root1&&root2){
        return (root1->data == root2->data)&&Check_Identical_trees(root1->left,root2->left)&&Check_Identical_trees(root1->right, root2->right); 
    }
    return 0;
}

int main()
{
    node *root1 = buildtree();
    node *root2 = buildtree();

    cout<<Check_Identical_trees(root1,root2);

    return 0;
}