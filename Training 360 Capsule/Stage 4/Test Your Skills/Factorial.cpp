#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int fact(ll n){
    if(n == 0 || n == 1) return 1;
    return n*fact(n-1);
}

int main(){ 
    ll n; cin>>n;
    cout << "The factorial of " << n << " is " << fact(n) << endl;
    return 0;
}