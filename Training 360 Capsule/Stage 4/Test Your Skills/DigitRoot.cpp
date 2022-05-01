#include <bits/stdc++.h>
using namespace std;

int digit_root(int n){
    int sum = 0;
    while(n>0){
        int b = n%10;
        sum+=b;
        n/=10;
    }
    if(0<sum and sum<=9){
        return sum;
    }
    else{
        digit_root(sum);
    }
}

int main(){
    int n; cin>>n;
    cout << digit_root(n) << endl;
    return 0;
}