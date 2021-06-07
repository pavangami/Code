#include <bits/stdc++.h>
using namespace std;

void substring(string s,string ans)
{
    if(s.size()==0)
    {
        cout<<ans<<"\n";
        return;
    }
    string op1=ans;
    string op2=ans;
    char c=s[0];
    int p=c;
    
    char sm= toupper(s[0]);
    op1=op1+ sm;
    op2=op2+s[0];
    s.erase(s.begin()+0);
    substring(s,op1);
    substring(s,op2);

}

int main()
{
    string s;
    cin>>s;
    substring(s,"");
   
    return 0;
}