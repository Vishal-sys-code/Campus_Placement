#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int first = __gcd(a,b);
    int ans = __gcd(first,c);
    if(ans == d){
        cout << "Answer is correct.";
    }
    else{
        cout << "Answer is wrong.";
    }
    return 0;
}