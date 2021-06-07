#include <bits/stdc++.h>
using namespace std;

class Stack
{
    int n;
    queue<int>q1;
    queue<int>q2;
    public:
    Stack()
    {
        n=0;
    }
    void push(int x)
    {
        q1.push(x);
        n++;        
    }
    void pop()
    {
        if(q1.empty())
        return;

        while (q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        n--;
        queue<int> t;
        t=q1;
        q1=q2;
        q2=t;
        
    }
    int top()
    {
        if(q1.empty())
        return -1;

        while (q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int topele=q1.front();
        q2.push(q1.front());
        q1.pop();
        queue<int> t;
        t=q1;
        q1=q2;
        q2=t;
        return topele;
    }
    int size()
    {
        return n;
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.size()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    st.pop();
    cout<<st.size()<<"\n";

    
    return 0;

}