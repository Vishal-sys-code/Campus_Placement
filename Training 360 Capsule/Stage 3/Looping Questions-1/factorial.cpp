#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fact(ll n){
    return (n == 1 || n == 0) ? 1 : n * fact(n - 1);
}

int main(){
    ll n; cin>>n;
    cout << fact(n) << endl;
    return 0;
}