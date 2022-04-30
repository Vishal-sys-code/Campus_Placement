#include <bits/stdc++.h>
using namespace std;

int handshakes(int n){
    return (n*(n-1)/2);
}

int main(){
    int n;
    cin>>n;
    cout << handshakes(n) << endl;
    return 0;
}