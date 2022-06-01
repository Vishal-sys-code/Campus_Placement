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
    double x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    double X = (x1+x2);
    double Y = (y1+y2);
    double p1 = X/2;
    double p2 = Y/2;
    cout << "Rachel's house is located at("<<(p1)<<","<<(p2)<<")"<< endl;
    return 0;
}
