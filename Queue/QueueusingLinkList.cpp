#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node*next;
    node(int val)
    {
        data=val;
        next==NULL;
    }

};
class Queue
{
    node* front;
    node* back;
    public:
    Queue()
    {
        front=NULL;
        back=NULL;
    }
    void push(int x)
    {
        node *n=new node(x);
        if(front==NULL)
        {
            front=n;
            back=n;
            return;

        }
        back->next=n;
        back=n;
    }
    void pop()
    {
        if(front == NULL)
        {
            cout<<"No element \n";
            return;
        }
        else if((front->next) == NULL)
        {
            cout<<"dsd";
            front=NULL;
            return;
        }
        //cout<<"dccdddd\n";
        node*todelete = front;
        front=front->next;
        delete todelete;
    }
    int peek()
    {
        if(front==NULL)
        {
            cout<<"No element \n";
            return -1;
        }
        
        return front->data;

    }
    bool isempty()
    {
        if(front != NULL)
        return false;
    
        return true;
    }

};



int main()
{
    Queue q;
    q.push(1);
    
    //cout<<q.peek();
    cout<<q.isempty();
    
    q.pop();
    //q.pop();
    cout<<q.isempty();
    
    return 0;

}