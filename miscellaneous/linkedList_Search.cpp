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


int searchList(Node *head,int key)
{
    int index=0;
    Node* current=head;

    while(current!= NULL)
    {

        if(current->data ==key)
        {
            return index;
        }
        index++;
        current=current->next;

    }
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


    cout<<"The number is at : " <<searchList(head,6) <<"th index.";



    return 0;
}
