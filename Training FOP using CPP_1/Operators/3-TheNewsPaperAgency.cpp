#include <bits/stdc++.h>
using namespace std;

void set_IO(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main(){
    set_IO();
    int a,b,c;
    cin>>a>>b>>c;
    int m1 = (a*b);
    int m2 = (a*c);
    int ans = (m1) - (100+m2);
    cout << ans << endl;
    return 0;
}