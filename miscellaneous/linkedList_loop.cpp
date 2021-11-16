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

bool detectLoop(Node *head)
{
    Node*slow_p=head;
    Node*fast_p=head;

    while(slow_p  && fast_p && fast_p->next)
    {
        slow_p=slow_p->next;
        fast_p=fast_p->next->next;

        if(slow_p==fast_p)
            return true;
    }

    return false;
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

    //head->next->next->next->next->next=head;

    if(detectLoop(head))
        cout<<"Loop Found \n";
    else
        cout<<"Loop Not Found \n";


    return 0;
}
