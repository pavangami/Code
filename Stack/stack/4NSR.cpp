#include <bits/stdc++.h>
using namespace std;

//using vector
vector<long long> nextsmallerElement(vector<long long> a, int n){
        // Your code here
        vector<long long> v;
        stack<long long>st;
        for(int i=n-1;i>=0;i--)
        {
            if(st.empty())
            v.push_back(-1);
            else if(!st.empty() && st.top()<a[i])
            v.push_back(st.top());
            else if(!st.empty() && st.top()>=a[i])
            {
                while(st.size()>0 && st.top()>=a[i])
                st.pop();
                if(st.size()==0)
                v.push_back(-1);
                else
                v.push_back(st.top());
            }
            st.push(a[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }

int main()
{
    int n;
    cin>>n;
    vector<long long> p(n);
    for(int i=0;i<n;i++)
    cin>>p[i];
    vector<long long> v;
    v=nextsmallerElement(p,n);
    for(auto &it:v)
    cout<<it<<" ";

    return 0;
}