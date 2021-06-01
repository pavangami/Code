#include <bits/stdc++.h>
using namespace std;

int firstoccurrence(int a[],int n,int k)
{
    int l=0;
    int h=n-1;
    int ans=-1;
    while (l<=h)
    {
        int mid=l+(h-l)/2;
         if(a[mid]==k)
         {
             ans=mid;
             h=mid-1;
         }
         else if(a[mid]<k)
         l=mid+1;
         else if(a[mid]>k)
         h=mid-1;

    }
    //cout<<a[l]<<" "<<a[h];
    return ans;

}
int lastoccurrence(int a[],int n,int k)
{
    int l=0;
    int h=n-1;
    int ans=-1;
    while (l<=h)
    {
        int mid=l+(h-l)/2;
         if(a[mid]==k)
         {
             ans=mid;
             l=mid+1;
         }
         else if(a[mid]<k)
         l=mid+1;
         else if(a[mid]>k)
         h=mid-1;

    }
    //cout<<a[l]<<" "<<a[h];
    return ans;

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
    
    //cout<<firstoccurrence(a,n,k)<<endl;
    cout<<lastoccurrence(a,n,k)-firstoccurrence(a,n,k)+1;
    

    return 0;
}