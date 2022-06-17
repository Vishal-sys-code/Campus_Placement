#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

//datatypes
typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

//pairs
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;


//dynamic-arrays
typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

//loops
#define rep(i, a, b) for (int i=a; i<=(b); i++)
#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

//shortening the variables
#define sz(x) (int)(x).size()
#define vt vector
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert
#define en "\n"

//Cpp Templates
template<class T> bool ckmin(T& a, const T& b) { return b < a ? a = b, 1 : 0; }
template<class T> bool ckmax(T& a, const T& b) { return a < b ? a = b, 1 : 0; }

// Time-epoch
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

//Some fav variables
const int MOD = 1000000007;
const char nl = '\n';
const int MX = 100001; //check the limits, dummy

//cout << "Case #" << case_num << ": " << (variable_solution) << '\n';

//inputs
#define read(a)             cin>>a
#define read_2(a,b)         cin>>a>>b
#define read_3(a,b,c)       cin>>a>>b>>c
#define read_4(a,b,c,d)     cin>>a>>b>>c>>d
#define read_5(a,b,c,d,e)   cin>>a>>b>>c>>d>>e

void online_judge() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

ll reverseNumber(ll n) {
    string s = to_string(n);
    reverse(s.begin(), s.end());
    n = stoi(s);
    return n;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    online_judge();
    ll n; cin >> n;
    cout << reverseNumber(n) << endl;
    return 0;
}