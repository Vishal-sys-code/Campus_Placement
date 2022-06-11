#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a,b; cin>>a>>b;
    ll n = (a+b);
    ll sum = 0;
    for(int i=1;i<n;i++){
        if(n%i == 0){
            sum += i;
        }
    }
    
    return 0;
}