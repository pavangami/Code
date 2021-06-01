#include <bits/stdc++.h>
using namespace std;

int indexofminmumelement(int a[],int n)
{
    int l=0;
    int h=n-1;
    if(a[l]<a[h])
    return 0;
    int ans=-1;
    while (l<=h)
    {
        if(a[l]<a[h])
        return l;
        int mid=l+(h-l)/2;
        int next=(mid+1)%n;
        int prev=(mid+n-1)%n;
         if(a[mid]<=a[next]&&a[mid]<=a[prev])
         {
             return mid;
         }
         else if(a[l]<=a[mid])
         l=mid+1;
         else if(a[mid]<a[h])
         h=mid-1;

    }
    return ans;

}


int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    cout<<indexofminmumelement(a,n);
    

    return 0;
}