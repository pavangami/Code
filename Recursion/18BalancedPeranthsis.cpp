#include <bits/stdc++.h>
using namespace std;
//https://practice.geeksforgeeks.org/problems/print-n-bit-binary-numbers-having-more-1s-than-0s0252/1

void generateBalanceParenthese(int op,int c,string ans)
{
    if(op==0 && c==0)
    {
        cout<<ans<<"\n";
        return;
    }
    if(op!=0)
    {
        generateBalanceParenthese((op-1),c,ans+'(');
    }
    if(c>op)
    {
        generateBalanceParenthese(op,(c-1),ans+')');
    }

}


int main()
{
    int n;
    cin>>n;
    generateBalanceParenthese(n,n,"");

   
    return 0;
}