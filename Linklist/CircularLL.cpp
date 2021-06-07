#include <bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node*next;

    node(int val)
    {
        data=val;
        next=NULL;
    } 

};
void insertAtHead(node*&head,int val)
{
    node*n=new node(val);
    if(head==NULL)
    {
        n->next=n;
        head=n;
        return;
    }

    node*temp=head;

    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
    
}
void insertAtTail(node*&head,int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        insertAtHead(head,val);        
        return;
    }
    node*temp=head;

    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;

}
void print(node* head)
{
    if(head==NULL)
    {
        cout<<"No element";
        return;
    }
    node* temp=head;
    do
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    while (temp!=head);  
    cout<<temp->data<<"\n";

}
bool search(node*head,int key)
{
    node*temp=head;
    do
    {
        if(temp->data==key)
        {
            return 1;
        }
        temp=temp->next;

    }
    while(temp!=head);
    return 0;
}

void deleteHead(node*&head)
{
    node* todelete=head;
    node*temp=head;

    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=head->next;
    head=head->next;
    delete todelete;
}
void deletevalue(node*&head,int pos)
{
    
    if(head==NULL)
    return;
    if(pos==1)
    {
        deleteHead(head);
        return;
    }
    node*temp=head;
    int count=1;
    while (count!=pos-1)
    {
        temp=temp->next;
        count++;
    }
    node*todelete =temp->next;
    temp->next=temp->next->next;
    delete todelete;    

}



int main()
{
    node* head=NULL;
    insertAtTail(head,4);
    insertAtTail(head,5);

    insertAtHead(head,3);
    insertAtHead(head,2);
    insertAtHead(head,1);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    insertAtTail(head,9);
    print(head);
    deletevalue(head,2);
    print(head);
    
        
 
    return 0;

}