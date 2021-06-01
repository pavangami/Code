#include <bits/stdc++.h>
using namespace std;

int floorof(int a[],int n,int k)
{
    int l=0;
    int h=n-1;
    int ans=-1;
    while (l<=h)
    {
        int mid=l+(h-l)/2;
         if(a[mid]==k)
         return a[mid];
         else if(a[mid]<k)
         {
             ans=a[mid];
             l=mid+1;
         }
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
    
    cout<<floorof(a,n,k);

    return 0;
}