#include<bits/stdc++.h>

using namespace std;

class Node{
  public:
      int data;
      Node*next;
};

void push(Node **head_ref,int new_data)
{
    Node *new_node= new Node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}

void deleteNode(Node **head_ref,int position)
{
    Node *temp= *head_ref;

    if(position == 0)
    {
        *head_ref=temp->next;
        free(temp);
        return;
    }

    for(int i=0; temp!=NULL && i<position-1;i++)
    {
        temp=temp->next;
    }

    if(temp==NULL && temp->next==NULL)
    {
        cout<<"No such position!";
    }

    Node*next=temp->next->next;
    free(temp->next);
    temp->next=next;
}


void printList(Node *node)
{
    while(node !=NULL)
    {
        cout<<node->data<<" ";
        node=node->next;
    }
}
int main()
{
    Node *head=NULL;

    push(&head,1);
    push(&head,5);
    push(&head,3);
    push(&head,9);
    push(&head,11);

    cout<<"Created linkedList : ";

    printList(head);
    cout<<"\n";

    deleteNode(&head,3);
    cout<<"After deletion linkedList : ";

    printList(head);



    return 0;
}

