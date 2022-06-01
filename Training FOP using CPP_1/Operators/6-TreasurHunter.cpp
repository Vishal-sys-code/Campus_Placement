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
    double n,x,y;
    cin>>n;
	cin>>x;
	cin>>y;
    double discount_x = (x/100);
    double discount_y = (y/100);
    int lb = (discount_x)*n;
    int bb = (discount_y)*(n-lb);
    int total_amount = (lb+bb);
    int p = (n-total_amount)/3;
    cout << int(lb) << endl;
    cout << int(bb) << endl;
    cout << int(p) << endl;
    return 0;
}
