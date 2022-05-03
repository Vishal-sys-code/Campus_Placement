#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int ans = 0;
    if(n<m){
        ans = n;
    }
    else{
        ans = m;
    }
    if(ans%2 == 0){
        cout << "Mani Iyer" << endl;
    }
    else{
        cout << "Arun Gupta" << endl;
    }
    return 0;
}