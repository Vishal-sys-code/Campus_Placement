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
    int m; cin>>m;
    if(m == 100){
        cout << "S" << endl;
    }
    else if(m>=90 && m<=99){
        cout << "A" << endl;
    }
    else if(m>=80 && m<=89){
        cout << "B" << endl;
    }
    else if(m>=70 && m<=79){
        cout << "C" << endl;
    }
    else if(m>=60 && m<=69){
        cout << "D" << endl;
    }
    else if(m>=50 && m<=59){
        cout << "E" << endl;
    }
    else if(m<50){
        cout << "F" << endl;
    }
    else{
        cout << "Invalid Input" << endl;
    }
    return 0;
}