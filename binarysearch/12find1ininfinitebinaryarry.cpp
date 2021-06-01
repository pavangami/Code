#include <bits/stdc++.h>
using namespace std;



int binarysearch(int a[],int l,int h)
{
    int ans=-1;
    while (l<=h)
    {
        int mid=l+(h-l)/2;
         if(a[mid]==1)
         {
             ans=mid;
             h=mid-1;
         }
         else if(a[mid]<1)
         l=mid+1;
         else if(a[mid]>1)
         h=mid-1;

    }
    //cout<<a[l]<<" "<<a[h];
    return ans;

}
int findele(int a[])
{
    int l=0;
    int h=1;

    while(a[h]==0)
    {
        l=h;
        h=2*h;
    }
    return binarysearch(a,l,h);

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    cout<<findele(a);

    return 0;
}