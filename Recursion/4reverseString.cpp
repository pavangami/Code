#include <bits/stdc++.h>
using namespace std;

void reverses(string s)
{
    if(s.size()==0)
    return;
    reverses(s.substr(1));
    cout<<s[0]<<" ";
}

int main()
{
    string s;
    cin>>s;
    reverses(s);

   
    return 0;
}