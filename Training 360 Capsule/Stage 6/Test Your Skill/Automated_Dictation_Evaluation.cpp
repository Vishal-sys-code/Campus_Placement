#include <bits/stdc++.h>
using namespace std;
#define MAX 50

int main(){
    char s1[MAX];
    cin>>s1;
    char s2[MAX];
    cin>>s2;
    int ans = strcmp(s1,s2);
    if(ans == 0){
        cout << "It is correct" << endl;
    }
    else{
        cout << "It is wrong" << endl;
    }
    return 0;
}