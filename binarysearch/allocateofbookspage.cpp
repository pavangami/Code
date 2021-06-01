#include <bits/stdc++.h>
using namespace std;
//Related Problems For Practice :
//Book Allocation Problem (GFG)
//Aggressive cow (spoj)
//Prata and roti (spoj)
//EKO (spoj)
//Google kickstart A Q-3 2020
// Painter Partition Problem
//Below Leetcode Problems
//1482 Minimum Number of Days to Make m Bouquets
//1283 Find the Smallest Divisor Given a Threshold
//1231 Divide Chocolate
//1011 Capacity To Ship Packages In N Days
//875 Koko Eating Bananas
//Minimize 
//774 Max Distance to Gas Station
//410 Split Array Largest Sum


bool isvalid(int a[],int n,int m,int mid)
    {
        int student=1;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=a[i];
            if(sum>mid)
            {
                student++;
                sum=a[i];
            }
            if(student>m)
            return 0;
        }
        return 1;
        
    }

    int findPages(int a[], int n, int m) 
    {
        //code here
        if(n<m)
        return -1;
        int maxi=INT_MIN;
        long int sum=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(a[i],maxi);
            sum+=a[i];
        }
        int ans=-1;
        long int l=maxi;
        long int h=sum;
        while(l<=h)
        {
            int mid =l+(h-l)/2;
            
            if(isvalid(a,n,m,mid)==true)
            {
                ans=mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
            
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
    int m;
    cin>>m;
    cout<<findPages(a,n,m);


}