#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int sumODDnumbers(int n){
    int rem;
    int sum=0;
    while(n>0){
        rem = n%10;
        n/=10;
        if(n%2 == 1){
            sum+=rem;
        }
    }
    return sum;
}

int sumEVENnumbers(int n){
    int rem;
    int sum=0;
    while(n>0){
        rem = n%10;
        n/=10;
        if(n%2 == 0){
            sum+=rem;
        }
    }
    return sum;
}

int main(){
    ll n;
    cin>>n;
    int a = sumODDnumbers(n);
    int b = sumEVENnumbers(n);
    if(a == b){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}
