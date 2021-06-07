#include <bits/stdc++.h>
using namespace std;

int postfixEvolution(string &s)
{
    stack<int> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        else
        {
            int op1,op2;
            op2=st.top();
            st.pop();
            op1=st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(pow(op1,op2));
                break;
            default:
                break;
            }

        }

    }
    return st.top();

}

int main()
{
    string s="46+2/5*7+";
    string p="963/-451*+*";
    cout<<postfixEvolution(p);

    
    return 0;

}