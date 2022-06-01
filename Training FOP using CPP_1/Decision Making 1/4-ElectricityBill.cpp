#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define lld long long double
#define pb push_back
#define ff front
#define ss second
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define MOD 1e7+9

void set_IO(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main(){
    set_IO();
    int unit;
    int amt = 0;
    cin>>unit;
    if(unit<=200)
        amt = unit*0.5;

    if(unit>200 && unit<=400)

        amt = amt + (unit)*0.65 + 100;

    if(unit>400 && unit<=600)

       amt = amt + (unit)*0.80 + 200;

    if(unit>600)

        amt = amt + (unit)*1.25 + 425;

    cout<<"Rs."<<amt;
    return 0;
}