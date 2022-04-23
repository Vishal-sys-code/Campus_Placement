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
    int a,b,c,n;
    cin>>a>>b>>c>>n;
    if((a%n) == 0){
        cout << "Car 1 goes into road A" << endl;
    }
    else if((b%n) == 0){
        cout << "Car 1 goes into road B" << endl;
    }
    else if((c%n) == 0){
        cout << "Car 1 goes into road C" << endl;
    }
    else{
        cout << "No path exist" << endl;
    }
    return 0;
}