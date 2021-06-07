#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void permute(vector<int> &v,int idx)
{
    if(idx == v.size())
    {
        ans.push_back(v);
        return;
    }
    for(int i=idx;i<v.size();i++)
    {
        swap(v[i],v[idx]);
        permute(v,idx+1);
        swap(v[i],v[idx]);
    }

}
void stl(vector<int>&v)
{
    sort(v.begin(),v.end());
    do
    {
        ans.push_back(v);
    } while (next_permutation(v.begin(),v.end()));
    
}

void helper(vector<int>&v,int idx)
{
    if(idx == v.size())
    {
        ans.push_back(v);
        return;
    }
    for(int i=idx;i<v.size();i++)
    {
        if(i!=idx and v[i]==v[idx])
        continue;
        swap(v[i],v[idx]);
        helper(v,idx+1);
        //swap(v[i],v[idx]);
    }

}
void avoiddpermute(vector<int> &v,int idx)
{
    sort(v.begin(),v.end());
    helper(v,0);   

}

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    
    for(auto &i:v)
    cin>>i;
    //permute(v,0);
    //stl(v);
    avoiddpermute(v,0);

    for(auto p:ans)
    {
        for(auto i:p)
        cout<<i<<" ";
        cout<<"\n";
    }

   
    return 0;
}