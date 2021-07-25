#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int d){
        data = d;
        next = NULL;
    }
};

node *firstStartNodeofLoop(node *&head, int d){
    node *fastptr, *slowptr;
    int loopexist = 0;

    // Detect loop in a linked list
    for(fastptr=head,slowptr=head; fastptr&&slowptr&&fastptr->next;){
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;

        if(fastptr==slowptr){
            loopexist = 1;
            break;
        }
    }
        if(loopexist)
           for(slowptr=head; slowptr!=fastptr; slowptr = slowptr->next,fastptr = fastptr->next->next);
           return slowptr;
        return NULL;
}

int main(){
    node *head = NULL; 
	int flag;
	insertAtBeginning(&head, 10);
	insertAtBeginning(&head, 20);
	insertAtBeginning(&head, 30);
	insertAtBeginning(&head, 40);
	insertAtBeginning(&head, 50);
	head->next->next->next->next = head->next->next;
	flag = detectLoop(head);
	printf(flag?"Loop Found": "Loop Not Found");
	if(flag)
		loopStartNode = findStartNodeOfLoop(head);
		printf("\nstarting node of loop is = %d", loopStartNode->data);
	return 1;

}