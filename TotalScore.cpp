#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n;
    cin>>n;
    int mat[n][n] = {0};
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>mat[i][j];
        }
    }
    
    int sum = 0;
    for (int i = 0;i < n; i++)
    {
        sum = sum + (mat[i][i]+ mat[n - i - 1][i]);
        // printf("1: %d 2: %d\n", i, n - i - 1);
        // printf("mat[%d][%d]: %d, mat[%d][%d]: %d \n\n", i, i, mat[i][i], n - i - 1, i, mat[n -i - 1][i]);
    }
    //printf("%d\n", sum);
    
    if (n % 2 != 0)
    {
        sum -= mat[n/2][n/2];
    }
    printf("%d", sum);
    return 0;
}