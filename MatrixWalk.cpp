#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     
    
    int n;
    cin>>n;
    
    int mat[n][n] = {0};
    
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        int j = i;
        int k = 0;
        
        while (j >= 0 && k <= i)
        {
            mat[k][j] = num;
            num++;
            j--;
            k++;
        }
    }
    
    for (int i = 1; i < n; i++)
    {
        int j = i;
        int k = n - 1;
        while (j < n && k >= i)
        {
            mat[j][k] = num;
            num++;
            j++;
            k--;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
        
    return 0;
}