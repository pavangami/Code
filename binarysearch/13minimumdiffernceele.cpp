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
         return 0;
         else if(a[mid]<k)
         l=mid+1;
         else if(a[mid]>k)
         h=mid-1;

    }
    int left=abs(a[l]-k);
    int right=abs(a[h]-k);

    return (left<=right ? left : right);

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