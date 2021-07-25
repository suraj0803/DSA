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

node *CreateTreeFromTrav(int *in, int *pre,int start, int end)
{
    static int i=0;
    if(start>end){
        return NULL;
    }
    //Recursicve case
    node *root = new node(pre[i]);

    int index=-1;
    for(int j=start; start<=end; j++){
        if(in[j]==pre[i]){
            index = j;
            break;
        }
    }
    i++;
    root->left = CreateTreeFromTrav(in,pre,start,index-1);
    root>right = CreateTreeFromTrav(in,pre,index+1,end);
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



int main()
{
    int in[] = {3,2,8,4,1,6,7,5};
    int pre[] = {1,2,3,4,8,5,6,7};
    int n = sizeof(in)/sizeof(in[0]);
    int start = 0;
    int end = n-1;

    CreateTreeFromTrav(in,pre,start,end);
    bfs(root);

    return 0;
}