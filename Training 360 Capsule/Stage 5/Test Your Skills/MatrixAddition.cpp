#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,c; cin>>r>>c;
    int m1[r][c], m2[r][c],sum[r][c];
    //matrix 1
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>m1[i][j];
        }
    }
    //matrix 2
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>m2[i][j];
        }
    }

    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }    

    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cout<<sum[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}