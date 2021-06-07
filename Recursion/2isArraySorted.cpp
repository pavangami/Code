#include <bits/stdc++.h>
using namespace std;

bool isSorted(int a[],int n)
{
    if(n==1)
    {
        return 1;
    }

    bool restArray = isSorted(a+1,n-1);
    if(a[0]<a[1] && restArray)
    return true;

    return 0;
}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<isSorted(a,n);


   
    return 0;
}