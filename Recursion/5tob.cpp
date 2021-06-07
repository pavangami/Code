#include <bits/stdc++.h>
using namespace std;
void tob(int n,char s,char d,char h)
{
    if(n==0)
    return;
    tob(n-1,s,h,d);
    cout<<"Move from "<<s<<" to "<<d<<"\n";
    tob(n-1,h,d,s);

}


int main()
{
    int n;
    cin>>n;
    tob(n,'A','C','B');

   
    return 0;
}