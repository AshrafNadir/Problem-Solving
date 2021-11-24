#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    int data;
    Node*next;
};


void push(Node **head_ref ,int new_data)
{
    Node* new_node =new Node(); //new node

    new_node -> data= new_data;
    new_node -> next = (*head_ref);
    (*head_ref)=new_node;
}


void reversal(Node **head)
{
    Node *current ,*prev,*next;

    current =*head;
    prev=NULL;

    while(current != NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;

    }

    *head=prev;

}

void printList(Node *node)
{
    while(node !=NULL)
    {
        cout<<" "<<node->data;
        node=node->next;
    }
}

int main()
{
    Node *head =NULL;



    // Insert 7 at the beginning.
    // So linked list becomes 7->6->NULL
    push(&head, 7);

    // Insert 1 at the beginning.
    // So linked list becomes 1->7->6->NULL
    push(&head, 1);
    push(&head, 5);
    push(&head, 8);

    // Insert 4 at the end. So
    // linked list becomes 1->7->6->4->NULL

    // Insert 8, after 7. So linked
    // list becomes 1->7->8->6->4->NULL

    cout<<"Created Linked list is: ";
    printList(head);

    reversal(&head);

    cout<<"\nPresent Linked list is: ";
    printList(head);



    return 0;
}

