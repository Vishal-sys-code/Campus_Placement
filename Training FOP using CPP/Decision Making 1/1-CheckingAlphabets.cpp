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
    char s;
    cin>>s;
    if(isalpha(s)){
        if((s == 'a') || (s == 'e') || (s == 'i') || (s == 'o') || (s == 'u') || (s == 'A') || (s == 'E') || (s == 'I') || (s == 'O') || (s == 'U')){
            cout << "Vowel" << endl;
        }
        else{
            cout << "Consonant" << endl;
        }
    }
    else{
        cout << "Not an alphabet" << endl;
    }
    return 0;
}