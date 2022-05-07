#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n; cin>>m>>n;
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    int sum = 0, row1 = 0, col_n = 0, diag = 0;
    for(int i = 0; i <= 0; i++){
        for(int j = 0; j < n-1; j++){
            row1 = row1 + mat[i][j];
        }
    }

    for(int j = n - 1; j == n-1; j--){
        for(int i = 1; i < m; i++){
            col_n = col_n + mat[j][i];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if ((i + j) == (m - 1)){
                diag += mat[i][j];
            }
        }
    }

    cout << "Sum of Zig-Zag pattern is "<< diag + row1 + col_n;
    return 0;
}