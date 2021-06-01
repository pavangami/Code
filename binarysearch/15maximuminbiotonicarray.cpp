#include <bits/stdc++.h>
using namespace std;

int bs(int a[],int n)
{
    if(n==1)
    return 0;
    if(a[0]>a[1])
    return 0;
    if(a[n-1]>a[n-2])
    return n-1;

    int l=1;
    int h=n-2;
    while (l<=h)
    {
        int mid=l+(h-l)/2;
        if(l==h)
        return l;

        if(mid>0 && mid<n-1)
        {
            if(a[mid]>a[mid-1] && a[mid]>a[mid+1])
            return mid;
            else if(a[mid-1]>a[mid])
            h=mid-1;
            else
            l=mid+1;
        }

    }
    return -1;

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    cout<<a[bs(a,n)];

    return 0;
}