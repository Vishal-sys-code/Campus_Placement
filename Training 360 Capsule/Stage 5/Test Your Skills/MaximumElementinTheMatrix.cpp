#include <bits/stdc++.h>
using namespace std;


int main(){
    int r,c; cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int max = arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    cout << "The maximum element is " << max << endl;
    return 0;
}
