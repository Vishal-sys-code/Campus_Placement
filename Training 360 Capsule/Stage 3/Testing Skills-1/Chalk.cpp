#include <bits/stdc++.h>
using namespace std;

int main(){
    float root,n,cnt = 0.0;
    int days,ans;
    cin>>n;
    root = 1/(sqrt(n));
    for(int i=0;i<n;i++){
        cnt = root + cnt;
        days = int(cnt);
        ans = (n + days);
    }
    cout << (ans+1) << endl;
}