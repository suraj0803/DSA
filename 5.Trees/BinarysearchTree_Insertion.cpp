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
// Accepts the old root node & data returns the new root node
node *InsertInBST(node *root, int data)
{
    // Base case
    if(root==NULL){
        return new node(data);
    }
    // Rec case
    if(data<root->data){
        root->left = InsertInBST(root->left,data);
    }
    else{
        root->right = InsertInBST(root->right,data);
    }
    return root;

}

node *build()
{
    //Read a list of nos till -1 and also these nos will be inserted to your bst
    int d;
    cin>>d;

    node *root=NULL;
    if(d!=-1){
        root = InsertInBST(root,d);
        cin>>d;
    }
    return root;
}

void inorder(node *root)
{
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    node *root = build();
    inorder(root);



    return 0;
}