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
    if(n == sum){
        cout << "They can read the message" << endl;
    }
    else{
        cout << "They can't read message" << endl;
    }
    return 0;
}