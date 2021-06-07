#include <bits/stdc++.h>
using namespace std;

class node {
    public:
    int data;
    node*next;
    node*prev;

    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    } 

};
void insertAtTail(node*&head,int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node*temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    n->prev=temp;
    temp->next=n;

}
void print(node* head)
{
    if(head==NULL)
    {
        cout<<"No element";
        return;
    }
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"<->";
        temp=temp->next;
    }   
    cout<<"NULL"<<"\n";

}
void printt(node* tail)
{
    if(tail==NULL)
    {
        cout<<"No element";
        return;
    }
    node* temp=tail;
    while (temp!=NULL)
    {
        cout<<temp->data<<"<->";
        temp=temp->prev;
    }   
    cout<<"NULL"<<"\n";

}

void insertAtHead(node*&head,int val)
{
    node*n=new node(val);
    n->next=head;
    if(head!=NULL)
    head->prev=n;
    
    head=n;
}
bool search(node*head,int key)
{
    node*temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return 1;
        }
        temp=temp->next;

    }
    return 0;
}
void deleteHead(node*&head)
{
    node* todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;
}
void deletevalue(node*&head,int val)
{
    
    if(head==NULL)
    return;
    if(head->next==NULL)
    {
        if(head->data == val)
        deleteHead(head);
        else
        cout<<"No element like "<<val<<" \n";
        return;

    }
    node*temp=head;
    while (temp->next->data!=val)
    {
        temp=temp->next;
    }
    node*todelete =temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    delete todelete;    

}
node* tail(node*head)
{
    node*temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    return temp;
    
}
/*
void reversel(node*&head)
{
    node*pptr=NULL;
    node*cptr=head;
    node*nptr=NULL;
    while (cptr!=NULL)
    {
        nptr=cptr->next;
        cptr->next=pptr;
        pptr=cptr;
        cptr=nptr;
    }
    head=pptr;    
}

*/


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
    deletevalue(head,6);
    print(head);
    node*Tail =tail(head);
    printt(Tail);
        
 
    return 0;

}