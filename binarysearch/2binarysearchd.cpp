#include <bits/stdc++.h>
using namespace std;

int binarysearchdec(int a[],int n,int k)
{
    int l=0;
    int h=n-1;
    while (l<=h)
    {
        int mid=l+(h-l)/2;
         if(a[mid]==k)
         return mid;
         else if(a[mid]>k)
         l=mid+1;
         else if(a[mid]<k)
         h=mid-1;

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
    int k;
    cin>>k;
    
    cout<<binarysearchdec(a,n,k);

    return 0;
}