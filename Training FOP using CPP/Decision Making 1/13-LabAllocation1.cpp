#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define lld long long double
#define pb push_back
#define ff front
#define ss second
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define MOD 1e7+9

void set_IO(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main(){
    set_IO();
    int a,b,c; cin>>a>>b>>c;
    if(a<=b && a<=c){
        cout << "L1" << endl;
    }
    else if(b<=a && b<=c){
        cout << "L2" << endl;
    }
    else{
        cout << "L3" << endl;
    }
    return 0;
}