/*
Help Kiara in reversing a string

Please help Kiara to write the correct code to reverse a string.

Input (stdin)
Hai

Output (stdout)
iaH


Input (stdin)
Hello

Output (stdout)
olleH

Input (stdin)
 Oh my god!

Output (stdout)
!dog ym hO
*/

#include <bits/stdc++.h>
using namespace std;

void reverseWords(string s){
    int n = s.length();
    vector<string> temp;
    int vs = temp.size();
    string str = "";
    for(int i=0;i<n;i++){
        if(s[i] == ' '){
            temp.push_back(str);
            str = "";
        }
        else{
            str+=s[i];
        }
    }
    temp.push_back(str);
    for(int i = vs-1;i>0;i--){
        cout << temp[i] << " ";
    }
    cout << temp[0];
}

int main(){
    string s; cin>>s;
    reverseWords(s);
    return 0;
}