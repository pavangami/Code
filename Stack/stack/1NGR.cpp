#include <bits/stdc++.h>
using namespace std;

//using array
void printNGE(int arr[], int n)
{
    stack<int> s;
 
    int arr1[n];
 
    for (int i = n - 1; i >= 0; i--) 
    {
        /*We will pop till we get the 
        greater element on top or stack gets empty*/
        while (!s.empty() && s.top() <= arr[i])
            s.pop();
 
        if (s.empty()) 
            arr1[i] = -1;         
        else
            arr1[i] = s.top();        
 
        s.push(arr[i]);
    }
 
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ---> " << arr1[i] << endl;
}
//using vector
vector<long long> nextLargerElement(vector<long long> a, int n){
        // Your code here
        vector<long long> v;
        stack<long long>st;
        for(int i=n-1;i>=0;i--)
        {
            if(st.empty())
            v.push_back(-1);
            else if(!st.empty() && st.top()>a[i])
            v.push_back(st.top());
            else if(!st.empty() && st.top()<=a[i])
            {
                while(st.size()>0 && st.top()<=a[i])
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
    v=nextLargerElement(p,n);
    for(auto &it:v)
    cout<<it<<" ";

    return 0;
}