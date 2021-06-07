#include <bits/stdc++.h>
using namespace std;

string moveX(string s)
{
    if(s.size()==0)
    return "";
    char t =s[0];
    string ans =moveX(s.substr(1));
    if(t=='x')
    return ans + t;
    else
    return t+ans;

}


int main()
{
    string s;
    cin>>s;
    cout<<moveX(s);    

   
    return 0;
}