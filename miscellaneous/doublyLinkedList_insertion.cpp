#include<bits/stdc++.h>

using namespace std;

class Node{

 public:
     int data;
     Node*next;
     Node*prev;
};


void push(Node **head_ref, int new_data)
{
    Node *new_node= new Node();

    new_node->data=new_data;
    new_node->next=*head_ref;
    new_node->prev=NULL;

    if((*head_ref) != NULL)
    {
        (*head_ref)->prev=new_node;
    }

    *head_ref=new_node;

}

void printList(Node*node)
{
    while(node!=NULL)
    {
        cout<<node->data<<" " ;
        node=node->next;
    }
}


int main()
{
    Node *head=NULL;

    push(&head,8);
    push(&head,3);
    push(&head,7);
    push(&head,11);
    push(&head,9);



    printList(head);

    return 0;
}
