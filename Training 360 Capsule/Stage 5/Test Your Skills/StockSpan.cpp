#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int x = 1;
    int y = 0;
    int arr[n];
    for(int i=0;i<n;i++){   
        cin>>arr[i];
    }
    cout << x;
    for(int i=1;i<n;i++){
        if(arr[i] < arr[i-1]){
            cout << "\n" << x;
        }
        else{
            y+=2;
            cout << "\n" << y;
        }
    }
    return 0;
}