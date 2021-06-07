#include <bits/stdc++.h>
using namespace std;

void addAtBottam(stack<int> &st,int ele)
{
    if(st.empty())
    {
        st.push(ele);
        return;
    }
    int topele=st.top();
    st.pop();
    addAtBottam(st,ele);
    st.push(topele);

}

void reverse(stack<int>&st)
{
    if(st.empty())
        return;
  
    int ele=st.top();
    st.pop();
    reverse(st);
    addAtBottam(st,ele);
}

int main()
{
    int n;
    cin>>n;
    stack<int> st;
    
    int p;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        st.push(p);
    }
    reverse(st);
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    


    
    return 0;

}