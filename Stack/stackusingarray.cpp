#include <bits/stdc++.h>
using namespace std;

class Stak
{
    int *arr;
    int top;
    public:
    Stak()
    {
        arr = new int[100];
        top=-1;
    }
    void ppush(int x)
    {
        if(top==99)
        {
            cout<<"Stack is Overflow\n";
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"No elemnt\n";
            return;
        }
        top--;
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"No elemnt\n";
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        if(top==-1)
        return 1;

        return 0;
    }

};


int main()
{
    Stak s;
    //cout<<s.empty()<<"\n";
    s.ppush(1);
    s.ppush(2);
    s.ppush(3);
    cout<<s.empty()<<"\n";
    cout<<s.Top()<<"\n";
    s.pop();
    s.pop();
    s.pop();
    cout<<s.empty()<<"\n";
    
    return 0;

}