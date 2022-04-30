#include <bits/stdc++.h>
using namespace std;
#define ll long long

int reverseDigits(int n){
    string strin = to_string(n);
    reverse(strin.begin(), strin.end());
    n = stoi(strin);
    return n;
}

int main(){
    ll n; cin>>n;
    cout << reverseDigits(n) << endl;
    return 0;
}