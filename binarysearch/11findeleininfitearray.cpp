#include <bits/stdc++.h>
using namespace std;

int binarysearch(int a[],int l,int h,int k)
{
    while (l<=h)
    {
        int mid=l+(h-l)/2;
        
         if(a[mid]==k)
         return mid;
         else if(a[mid]<k)
         l=mid+1;
         else if(a[mid]>k)
         h=mid-1;

    }
    return -1;

}
int findele(int a[],int k)
{
    int l=0;
    int h=1;

    while(a[h]<k)
    {
        l=h;
        h=2*h;
    }
    return binarysearch(a,l,h,k);

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
    
    cout<<findele(a,k);

    return 0;
}