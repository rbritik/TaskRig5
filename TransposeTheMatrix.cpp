#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int m, n;  // Dimensions of matrix
    cin>>m;
    cin>>n;
    int arr[m][n];
    
    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int tran[n][m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            tran[j][i] = arr[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", tran[i][j]);
        }
        puts("");
    }
    return 0;
}