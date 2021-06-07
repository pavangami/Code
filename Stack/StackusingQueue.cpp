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
        q2.push(x);
        n++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> t;
        t=q1;
        q1=q2;
        q2=t;
        
    }
    void pop()
    {
        q1.pop();
        n--;
    }
    int top()
    {
        if(!q1.empty())
        return q1.front();
        return -1;
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
    
    return 0;

}