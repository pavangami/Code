#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if(c=='^')
    return 3;
    else if(c=='*'||c=='/')
    return 2;
    else if(c=='+'||c=='-')
    return 1;
    else 
    return -1;
}

string infixtoprefix(string s)
{
    reverse(s.begin(),s.end());
    /*for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        s[i]=')';
        if(s[i]==')')
        s[i]='(';
    }*/
    stack<char> st;
    string ans="";

    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            ans=ans+s[i];
        }
        else if(s[i]==')')
        st.push(s[i]);
        else if(s[i]=='(')
        {
            while (!st.empty()&&st.top()!=')')
            {
                ans+=st.top();
                st.pop();
            }
            if(!st.empty())
            st.pop();            
        }
        else
        {
            while (!st.empty() && prec(st.top())>prec(s[i]))
            {
                ans=ans+st.top();
                st.pop();
            }
            st.push(s[i]);
        }

    }
    while (!st.empty())
    {
        ans=ans+st.top();
        st.pop();
    }
    reverse(ans.begin(),ans.end());
    return ans;
    

}

int main()
{
    string s="(9-6/3)*(4+5*1)";
    cout<<infixtoprefix(s);


    return 0;

}