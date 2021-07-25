#include<iostream>

using namespace std;
// Two Pointer approach

class node{
    public:
    int data;
    node *next;

    node(int d){
        data = d;
        next = NULL;
    }
};

void insertAtBeg(node *&head, int data){
    if(head==NULL){
        head = new node(data);
        return;
    }
    node *new_node = new node(data);
    new_node->next = head;
    head=new_node;
}

int getKthNodeFromEnd(node *head, int k){
    if(k<=0 || !head)// when there is no node
       return -1;
    
    node *KthNode, *refPtr; // Two pointers
    KthNode = refPtr = head; // Both Initialize to head
    for(int count = 0; count<k; count++){
        if(!refPtr)// if it is null
           return -1;
        refPtr = refPtr->next;
    }
    // Both refPtr anf kthNode will move one point at a time simultaneously. when refptr becomes null it will exit the loop
    for(;refPtr;refPtr=refPtr->next, KthNode = KthNode->next);
    return KthNode?KthNode->data:-1;
}

void print(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}

int main()
{
    node *head = NULL;
    insertAtBeg(head,5);
    insertAtBeg(head,4);
    insertAtBeg(head,3);
    insertAtBeg(head,2);
    insertAtBeg(head,1);

    int k = 2;
    print(head);
    cout<<getKthNodeFromEnd(head,k)<<endl;

    return 0;
}