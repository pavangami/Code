#include <bits/stdc++.h>
using namespace std;

void permutation(string s, string ans)
{
    if(s.size()==0)
    {
        cout<<ans<<"\n";
        return;
    }
    for(int i=0;i<s.size();i++)
    {
        char c=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);

        permutation(ros,ans+c);
    }
}


int main()
{
    string s;
    cin>>s;
    permutation(s,"");
   
    return 0;
}