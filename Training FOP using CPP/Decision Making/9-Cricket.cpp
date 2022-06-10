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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    float e = (a/6);
    int f = (d/6);
    int g = (d%6);
    float h =((float)f + (float)g/10);
    float i = (c/h);
    float j = (b/e);
    cout << e << endl;
    cout << fixed << setprecision(1) << h << endl;
    cout << i  << endl; 
    cout << j << endl;
    if(i>j){
        cout << "Eligible to Win" << endl;
    }
    else{
        cout << "Not Eligible to Win" << endl;
    }
    return 0;
}