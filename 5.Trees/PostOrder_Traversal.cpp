#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node *left;
    node*right;

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
    node * root = new node(d);
    root->left = buildtree();
    root->right = buildtree();

    return root;
}

void print(node *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

void printPostorder(node *root){
    if(root==NULL){
        return;
    }
    print(root->left);
    print(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node *root = buildtree();
    print(root);
    cout<<endl;

    cout<<"Postorder Traversal is : ";
    printPostorder(root);

    return 0;
}