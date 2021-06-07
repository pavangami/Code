#include <bits/stdc++.h>
using namespace std;

//using vector
vector<long long> nextsmallerright(vector<long long> a, int n){
        // Your code here
        vector<long long> v;
        stack<long long>st;
        for(int i=n-1;i>=0;i--)
        {
            if(st.empty())
            v.push_back(-1);
            else if(!st.empty() && a[st.top()]<a[i])
            v.push_back(st.top());
            else if(!st.empty() && a[st.top()]>=a[i])
            {
                while(st.size()>0 && a[st.top()]>=a[i])
                st.pop();
                if(st.size()==0)
                v.push_back(-1);
                else
                v.push_back(st.top());
            }
            st.push(i);
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<n;i++)
        if(v[i]==-1)
        v[i]=n;
        return v;
    }
vector<long long> nextsmallerleft(vector<long long> a, int n){
        // Your code here
        vector<long long> v;
        stack<long long>st;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            v.push_back(-1);
            else if(!st.empty() && a[st.top()]<a[i])
            v.push_back(st.top());
            else if(!st.empty() && a[st.top()]>=a[i])
            {
                while(st.size()>0 && a[st.top()]>=a[i])
                st.pop();
                if(st.size()==0)
                v.push_back(-1);
                else
                v.push_back(st.top());
            }
            st.push(i);
        }
        return v;
}
long long getMaxArea(vector<long long> a, int n)
    {
        // Your code here
        long long ans=1;
        vector<long long> left;
        left=nextsmallerleft(a,n);
    
        vector<long long> right;
        right=nextsmallerright(a,n);
        
        vector<long long> width(n);
        for(int i=0;i<n;i++)
        width[i]=right[i]-left[i]-1;
       

        vector<long long> an(n);
        for(int i=0;i<n;i++)
        {
            an[i]=width[i]*a[i];
            ans=max(an[i],ans);
        }

        return ans;
    }
int main()
{
    int n;
    cin>>n;
    vector<long long> p(n);
    for(int i=0;i<n;i++)
    cin>>p[i];
    cout<<getMaxArea(p,n);
    
    

    return 0;
}