#include <bits/stdc++.h>
using namespace std;
#define ll long long 



int main(){ 
    ll n; cin>>n;
    ll a = 0;
    ll b = 1;
    ll c;
    for(int i=2;i<n;i++){
        c = a+b;
        a = b;
        b = c;
    }
    cout << "The term " << n  << " in the fibonacci series is " << b << endl;
    return 0;
}