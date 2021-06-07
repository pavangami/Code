#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *arr;
    int front,back;
    public:
    Queue()
    {
        arr =new int[100];
        front=-1;
        back=-1;
    }
    void push(int x)
    {
        if(back==99)
        {
            cout<<"Overflow \n";
            return;
        }
        back++;
        arr[back]=x;
        if(front == -1)
        {
            front++;
        }

    }
    void pop()
    {
        if(front==-1 || front>back)
        {
            cout<<"No element \n";
        }
        front++;
    }
    int peek()
    {
        if(front==-1 || front>back)
        {
            cout<<"No element \n";
            return -1;
        }
        return arr[front];

    }
    bool empty()
    {
        if(front==-1 || front>back)
        {
            return true;
        }
        return false;
    }

};


int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.peek();
    q.pop();
    cout<<q.peek();
    q.pop();
    q.pop();
    q.pop();
    cout<<q.empty();

    
    return 0;

}