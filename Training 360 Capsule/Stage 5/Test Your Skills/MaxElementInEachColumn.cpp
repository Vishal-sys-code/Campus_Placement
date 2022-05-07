#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=1;i<=r;i++){
        for(int j=1;j<=c;j++){
            cin>>arr[i][j];
        }
    }
    int max = 0;
    for(int i = 1;i<=c;i++){
        max = arr[1][c];
        for(int j = 1;j<=r;j++){
            if(arr[j][i] >= max){
                max = arr[j][i];
            }
        }
        cout << max << endl;
    }
    return 0;
}