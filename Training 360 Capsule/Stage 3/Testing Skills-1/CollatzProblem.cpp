#include <bits/stdc++.h>
using namespace std;


int main(){
    int n; cin>>n;
    cout << n << endl;
    int count = 0;
    while(n>1){
        if(n%2 == 0){
            n/=2;
        }
        else{
            n = (3*n)+1;
        }
        count++;
        cout << n << endl;
    }
    cout << count << endl;
    return 0;
}