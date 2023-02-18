#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    
    int n;
    cin>>n;
    
    int mat[n][n];
    
    for (int i = 0; i <= n/2; i++)
    {
       for (int j = i; j < n - i; j++)
       {
           mat[i][j] = i + 1;
           mat[j][i] = i + 1;
       }
       for (int j = n - i - 1; j >= i; j--)
       {
           mat[n - i - 1][j] = i + 1;
           mat[j][n - i - 1] = i + 1;
       }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            printf("%d ", mat[i][j]);
        puts("");
    }
        
    return 0;
}
