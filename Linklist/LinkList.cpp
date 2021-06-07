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
        cout<<temp->data<<"->";
        temp=temp->next;
    }   
    cout<<"NULL"<<"\n";

}
void printc(node* head)
{
    int c=0;
    node* temp=head;
    while (c<20)
    {
        c++;
        cout<<temp->data<<"->";
        temp=temp->next;
    }   
    cout<<"NULL"<<"\n";

}
void insertAtHead(node*&head,int val)
{
    node*n=new node(val);
    n->next=head;
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
    delete todelete;    

}
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
node* reversek(node*&head,int k)
{
    node*pptr=NULL;
    node*cptr=head;
    node*nptr=NULL;
    int count=0;
    while (cptr!=NULL && count<k)
    {
        nptr=cptr->next;
        cptr->next=pptr;
        pptr=cptr;
        cptr=nptr;
        count++;
    }
    if(nptr!=NULL)
    {
        head->next=reversek(nptr,k);
    }
    return pptr;

}
node* reverselRec(node*head)
{
    if(head==NULL || head->next==NULL)
    return head;
    node* newhead =reverselRec(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;


}
void makecycle(node*head,int k)
{
    int count=0;
    node* temp=head;
    node* knode=head;
    while (temp->next!=NULL)
    {
        count++;
        if(count==k)
        {
            knode=temp;
        }
        temp=temp->next;
    }
    temp->next=knode;    

}
bool cycledetection(node*head)
{
    node*slow=head;
    node*fast=head;
    while (fast !=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        return 1;
    }
    return 0;
    
}
void removecycle(node*head)
{
    node*slow=head;
    node*fast=head;
    do
    {
        slow=slow->next;
        fast=fast->next->next;

    } while (slow!=fast);
    fast=head;
    while (slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;      

}
int length(node*head)
{
    int l=0;
    node*temp=head;
    while (temp!=NULL)
    {
        l++;
        temp=temp->next;
    }
    return l;
    
}
node* knodelasttofirst(node* head,int k)
{
    node* newHead;
    node* newTail;
    node* Tail=head;

    int l=length(head);
    k=k%l;
    if(k==0)
    return head;
    int count=1;
    while (Tail->next!=NULL)
    {
        if(count==l-k)
        {
            newTail=Tail;
        }
        if(count==l-k+1)
        {
            newHead=Tail;
        }
        count++;
        Tail=Tail->next;
    }
    Tail->next=head;
    newTail->next=NULL;
    return newHead;
    

}
void makeIntersection(node*head1,node*head2,int pos)
{
    while (--pos)
    {
        head1=head1->next;
    }
    while (head2->next!=NULL)
    {
        head2=head2->next;
    }
    head2->next=head1;   
    
}
int findIntersectionpoint(node*head1,node*head2)
{
    int l1=length(head1);
    int l2=length(head2);

    int d=0;
    node* ptr1;
    node* ptr2;
    if(l1>=l2)
    {
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    else
    {
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    while (d)
    {
        ptr1=ptr1->next;
        if(ptr1==NULL)
        return -1;
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1==ptr2)
        return ptr2->data;

        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
    
}
node* mergesortedll(node*h1,node*h2)
{
    node* d=new node(-1);
    node*head1=h1;
    node*head2=h2;
    node*ptr=d;

    while (head1!=NULL && head2!=NULL)
    {
        if(head1->data <= head2->data)
        {
            ptr->next=head1;
            head1=head1->next;
            
        }
        else if(head1->data > head2->data)
        {
            ptr->next=head2;
            head2=head2->next;
                      
        }
        ptr=ptr->next;    
    }
    while (head1!=NULL)
    {
        ptr->next=head1;
        head1=head1->next;
        ptr=ptr->next;
    }
    while (head2!=NULL)
    {
        ptr->next=head2;
        head2=head2->next;
        ptr=ptr->next;
    }
    return d->next;
    
}
node* findIntersection(node* h1, node* h2)
{
    // Your Code Here
    node* d=new node(-1);
    node*head1=h1;
    node*head2=h2;
    node*ptr=d;

    while (head1!=NULL && head2!=NULL)
    {
        if(head1->data == head2->data)
        {
            ptr->next=head1;
            head1=head1->next;
            head2=head2->next;
            ptr=ptr->next;
            
        }
        else if(head1->data > head2->data)
        {
            head2=head2->next;
                      
        }
        else
        {
            head1=head1->next;
        }
            
    }
    return d->next;
}
void evenafterodd(node*&head)
{
    node*odd=head;
    node*even=head->next;
    node*evenstart=head->next;

    while (odd->next !=NULL && even->next != NULL)
    {
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenstart;
    
    
}
void removeDuplicates(node* head)
{
    struct node* temp=head;
    if(temp==NULL || temp->next==NULL)
    {
        return;
    }
    while(temp->next!=NULL)
    {
        if(temp->data==temp->next->data)
        {
            temp->next=temp->next->next;
            continue;
        }
        temp=temp->next;
    }
    
    
}

int main()
{
    node* head=NULL;
    node* head2=NULL;
    insertAtTail(head2,4);
    insertAtTail(head2,5);
    //print(head);
    insertAtTail(head,2);
    insertAtTail(head,2);
    insertAtTail(head,2);
    insertAtTail(head,2);
    /*insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    insertAtTail(head,9);*/
    //insertAtTail(head,9);
    //print(head);
    //cout<<search(head,5);    
    //print(reverselRec(head));
    //print(head);
    //node* newhead=reversek(head,2);
    //print(newhead);
    //makecycle(head,4);
    //printc(head);
    //cout<<cycledetection(head);
    //removecycle(head);
    //cout<<cycledetection(head);
    //print(head);
    //node* newHead=knodelasttofirst(head,9);
    //print(newHead);
    //makeIntersection(head,head2,5);
    //print(head);
    //print(head2);
    //node* newHead=mergesortedll(head,head2);
    //print(newHead);
    //evenafterodd(head);
    //print(head);
    //cout<<findIntersectionpoint(head,head2);
    print(head);
    removeDuplicates(head);
    print(head);

 
    return 0;

}