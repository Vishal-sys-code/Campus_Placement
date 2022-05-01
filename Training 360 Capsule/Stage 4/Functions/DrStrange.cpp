#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,r;
    cin>>n>>m>>r;
    int a = pow(n,m);
    if(a>=r){
        cout << "Doctor, you can proceed with your experiment." << endl;
    }
    else{
        cout << "Sorry Doctor! You need more bacteria." << endl;
    }
    return 0;
}