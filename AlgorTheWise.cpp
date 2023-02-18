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
    int tar[n][n];
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>mat[i][j];
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>tar[i][j];
        }
    }
    
    int flag = 0;
    for (int count = 1; count <= 4; count++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] != tar[j][i])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 0)
        {
            printf("YES");
            return 0;
        }
        flag = 0;
        int temp1, temp2;
       for (int i = 0; i < n / 2; i++)
       {
            for (int j = i; j < n - i - 1; j++)
            {   
                //cout<<mat[i][j]<<" "<<mat[j][n-i-1]<<" "<<mat[n - i - 1][n - j - 1]<<" "<<mat[n - j - 1][i]<<"\n";
                temp1 = mat[i][j];  // mat[2][1]
                mat[i][j] = mat[n - j - 1][i];  // mat[][1] 
                temp2 = mat[j][n - i - 1];
                mat[j][n - i - 1] = temp1;
                temp1 = mat[n - i - 1][n - j - 1];
                mat[n - i - 1][n - j - 1] = temp2;
                mat[n - j - 1][i] = temp1;
                //cout<<mat[i][j]<<" "<<mat[j][n-i-1]<<" "<<mat[n - i - 1][n - j - 1]<<" "<<mat[n - j - 1][i]<<"\n\n";
            }
            //cout<<"Count: "<<i<<"\n\n";
        }  
    }
    
    printf("NO");
    return 0;
}