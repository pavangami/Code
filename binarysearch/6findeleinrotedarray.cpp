#include <bits/stdc++.h>
using namespace std;


int indexofmine(vector<int>& a,int n)
    {
    int l=0;
    int h=n-1;
    if(a[l]<a[h])
    return 0;
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
        return -1;
    }
    int bs(vector<int>& a,int s,int n,int k)
    {
    int l=s;
    int h=n-1;
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
    int searche(vector<int>& nums, int target) {
        int mini=indexofmine(nums,nums.size());
        int ans=-1;
        if(mini!=0)
        ans=bs(nums,0,mini,target);
        if(ans!=-1)
            return ans;
        else
        {
            ans=bs(nums,mini,nums.size(),target);
            return ans;
        }        
        
    }
    int main()
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        int k;
        cin>>k;
        cout<<searche(v,k);

        
    }