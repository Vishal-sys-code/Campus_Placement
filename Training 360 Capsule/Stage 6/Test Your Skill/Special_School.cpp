#include <bits/stdc++.h>
using namespace std;


int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    string s1_rev = string(s1.rbegin(),s1.rend());
    if(s2 == s1_rev){
        cout << "It is correct" << endl;
    }
    else{   
        cout << "It is wrong" << endl;
    }
    return 0;
}