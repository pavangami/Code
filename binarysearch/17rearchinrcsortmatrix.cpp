#include <bits/stdc++.h>
using namespace std;

int matSearch (int N, int M, int m[][4], int x)
{
    int r=N-1;
    int c=0;
    while(r>=0 && c<M)
    {
        if(m[r][c]==x)
        return 1;
        else if(m[r][c]>x)
        r--;
        else
        c++;
        
    }
    return 0;
    
}
int main()
{
    int mat[4][4] = { { 10, 20, 30, 40 },
                      { 15, 25, 35, 45 },
                      { 27, 29, 37, 48 },
                      { 32, 33, 39, 50 } };
    cout<<matSearch(4, 4,mat, 29);
 
    return 0;
}