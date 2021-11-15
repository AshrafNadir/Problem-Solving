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

int getCount(Node *head)
{
    int Count =0;
    Node* current =head;

    while(current != NULL)
    {
        Count++;
        current=current->next;
    }
    return Count;

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
    Node* head =NULL;

    push(&head, 5);
    push(&head, 0);
    push(&head, 2);
    push(&head, 6);
    push(&head, 11);
    push(&head, 8);


    cout<<"Length of the linkedList is : " << getCount(head);



    return 0;
}
