#include <bits/stdc++.h>
using namespace std;

set<string> se;

void substring(string s,string ans)
{
    if(s.size()==0)
    {
        se.insert(ans);
        //cout<<ans<<"\n";
        return;
    }
    string op1=ans;
    string op2=ans;
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
    auto it =se.begin();
    int i=1;
    while (it!=se.end())
    {
        cout<<i<<*it<<"\n";
        it++;
        i++;
    }
    
   
    return 0;
}