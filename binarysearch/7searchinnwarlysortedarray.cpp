#include <bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int n,int k)
{
    int l=0;
    int h=n-1;
    while (l<=h)
    {
        int mid=l+(h-l)/2;
         if(a[mid]==k)
         return mid;
         else if(mid>=l && a[mid-1]==k)
         return mid-1;
         else if(mid<=h && a[mid+1]==k)
         return mid+1;
         else if(a[mid]<k)
         l=mid+2;
         else if(a[mid]>k)
         h=mid-2;

    }
    //cout<<a[l]<<" "<<a[h];
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
    
    cout<<binarysearch(a,n,k);

    return 0;
}