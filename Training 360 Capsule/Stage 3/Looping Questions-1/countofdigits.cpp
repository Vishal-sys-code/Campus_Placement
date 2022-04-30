#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n; cin>>n;
    ll cnt = 0;
    if(n == 0){
        n = 1;
    }
    while(n>0){
        n/=10;
        cnt++;
    }
    cout<< cnt << endl;
}