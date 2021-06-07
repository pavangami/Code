#include <bits/stdc++.h>
using namespace std;

int prefixEvolution(string &s)
{
    stack<int> st;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]>='0'&&s[i]<='9')
        {
            st.push(s[i]-'0');
        }
        else
        {
            int op1,op2;
            op1=st.top();
            st.pop();
            op2=st.top();
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
    string s="-+7*45+20";
    string p="*-9/63+4*51";
     
    cout<<prefixEvolution(p);

    
    return 0;

}