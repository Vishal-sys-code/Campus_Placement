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
    int r,c,n;
    cin>>r>>c>>n;
    if(r+c==n || (r+c)*2==n){
        cout << "It is an orange tree" << endl;
    }
    else{
        cout << "It is not an orange tree" << endl;
    }
    return 0;
}