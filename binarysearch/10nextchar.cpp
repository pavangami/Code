#include <bits/stdc++.h>
using namespace std;

char nextchar(char a[],int n,char k)
{
    int l=0;
    int h=n-1;
    char ans='#';
    while (l<=h)
    {
        int mid=l+(h-l)/2;
         
         if(a[mid]<=k)
             l=mid+1;
         else if(a[mid]>k)
         {
             ans=a[mid];
             h=mid-1;
         }         

    }//cout<<a[l]<<" "<<a[h];
    return ans;

}

int main()
{
    int n;
    cin>>n;
    char a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    char k;
    cin>>k;
    
    cout<<nextchar(a,n,k);

    return 0;
}