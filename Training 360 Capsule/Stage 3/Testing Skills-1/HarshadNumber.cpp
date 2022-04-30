#include <bits/stdc++.h>
using namespace std;

int getdigitSUM(int n){
    int sum = 0;
    int rem;
    while(n>0){
        rem = n%10;
        sum+=rem;
        n/=10;
    }
    return sum;
}

int main(){
    int n; cin>>n;
    int temp = n;
    if((temp % getdigitSUM(n)) == 0){
        cout << "Harshad Number" << endl;
    }
    else{
        cout << "Not Harshad Number" << endl;
    }
    return 0;
}