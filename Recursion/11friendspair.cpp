#include <bits/stdc++.h>
using namespace std;

int pairfriend(int n)
{
    if(n==0 || n==1 || n==2)
    return n;

    return pairfriend(n-1)+(n-1)*pairfriend(n-2);

}

int main()
{
    int n;
    cin>>n;
    cout<<pairfriend(n);
   
    return 0;
}