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
    int a,b; cin>>a>>b;
    int ans1 = (a/b);
    int ans2 = (a%b);
    cout << "The number of friends in each team is " << ans1 << " and left out is " << ans2 << endl;
    return 0;
}
