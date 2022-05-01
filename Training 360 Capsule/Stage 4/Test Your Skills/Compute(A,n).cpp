#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,n;
    cout << "Enter the value of a" << endl;
    cin>>a;
    cout << "Enter the value of n" << endl;
    cin>>n;
    int ans = pow(a,n);
    cout << "The value of " << a << " power " << n << " is " << ans << endl;
    return 0;
}