#include <bits/stdc++.h>
using namespace std;


vector <long long> calculateSpan(vector<long long> a, int n)
    {
       // Your code here
       vector<long long> v;
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(st.empty())
            v.push_back(-1);
            else if(!st.empty() && a[st.top()]>a[i])
            v.push_back(st.top());
            else if(!st.empty() && a[st.top()]<=a[i])
            {
                while(st.size()>0 && a[st.top()]<=a[i])
                st.pop();
                if(st.size()==0)
                v.push_back(-1);
                else
                v.push_back(st.top());
            }
            st.push(i);
        }
        for(int i=0;i<n;i++)
        v[i]=i-v[i];
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
    v=calculateSpan(p,n);
    for(auto &it:v)
    cout<<it<<" ";

    return 0;
}