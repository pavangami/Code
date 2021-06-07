#include <bits/stdc++.h>
using namespace std;

int knapsack(int v[],int w[],int n,int wt)
{
    if(n==0 || wt ==0)
    return 0;
    if(w[n-1]>wt)
    {
        return knapsack(v,w,n-1,wt);
    }

    return max(knapsack(v,w,n-1,wt-w[n-1])+v[n-1],knapsack(v,w,n-1,wt));
}

int main()
{
   int n=3;

   int v[n]={100,50,150};
   int w[n]={10,20,30};
   cout<<knapsack(v,w,n,50);
    return 0;
}