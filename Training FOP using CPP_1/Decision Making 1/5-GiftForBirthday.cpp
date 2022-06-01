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
    int year;
    cin>>year;
    if(year%400 == 0){
        cout << year << "is a leap year" << endl;
    }
    else if(year%100 == 0){
        cout << year << "is not a leap year" << endl;
    }
    else if(year%4 == 0){
        cout << year << "is a leap year" << endl;
    }
    else{
        cout << year << "is not a leap year" << endl;
    }
    return 0;
}