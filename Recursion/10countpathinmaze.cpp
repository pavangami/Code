#include <bits/stdc++.h>
using namespace std;

int countpath(int i,int j,int n)
{
    if(i==n && j==n)
    return 1;
    int count=0;
    if(i<n)
    count+=countpath(i+1,j,n);
    if(j<n)
    count+=countpath(i,j+1,n);
    return count;
}


int main()
{
    int n;
    cin>>n;
    cout<<countpath(0,0,n-1);
   
    return 0;
}