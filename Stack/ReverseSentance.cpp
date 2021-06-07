#include <bits/stdc++.h>
using namespace std;

void reversesentance(string s)
{
    stack <string> st;
    for(int i=0;i<s.size();i++)
    {
        string p="";
        while (s[i]!=' ' && i<s.size() )
        {
            p+=s[i];
            i++;
        }
        st.push(p);        
    }
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }

}

int main()
{
    string s;
    getline(cin,s);
    reversesentance(s);

}