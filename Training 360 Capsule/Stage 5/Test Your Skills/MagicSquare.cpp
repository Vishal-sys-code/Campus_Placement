#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int D1 = 0;
    int D2 = 0;
    int m[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j){
                D1 += m[i][j];
            }
            if(i+j+1 == n){
                D2 += m[i][j];
            }
        }
    }
    if(D1 == D2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}