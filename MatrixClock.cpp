#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n, m;
    cin>>n>>m;
    
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>mat[i][j];
        }
    }
    if (m == 1)
    {
        for (int i = 0; i < n; i++)
        {
            cout<<mat[i][0]<<" ";
        }
        return 0;
    }
    if (n == 1)
    {
        for (int i = 0; i < m; i++)
        {
            cout<<mat[0][i]<<" ";
        }
        return 0;
    }
    
    for (int i = 0; i < m; i++)
    {
        cout<<mat[0][i]<<" ";
    }
    for (int k = 1; k < n; k++)
    {
        cout<<mat[k][m - 1]<<" ";
    }
    
    for (int i = m - 2; i >= 0; i--)
    {
        cout<<mat[n - 1][i]<<" ";
    }
    for (int i = n - 2; i >= 1; i--)
    {
        cout<<mat[i][0]<<" ";
    }
    
    return 0;
}