#include <bits/stdc++.h>
using namespace std;

void dec(int n)
{
    if(n==1)
    {
        cout<<n<<"\n";
        return;
    }
    cout<<n<<"\n";
    dec(n-1);
}
void inc(int n)
{
    if(n==1)
    {
        cout<<n<<"\n";
        return;
    }
    inc(n-1);
    cout<<n<<"\n";
    
}


int main()
{
    int n;
    cin>>n;
    dec(n);
    inc(n);

   
    return 0;
}