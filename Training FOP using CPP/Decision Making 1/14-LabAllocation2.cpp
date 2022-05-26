#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    char lab[2];
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>lab;

    if((strcmp(lab,"L1"))==0){
        if(b<c){
            cout << "L2";
        }
        else{
            cout << "L3";
        }
    }

    else if((strcmp(lab,"L2"))==0){
        if(a<c){
            cout << "L1";
        }
        else{
            cout << "L3";
        }
    }

    else{
        if(a<b){
            cout << "L1";
        }
        else{
            cout << "L2";
        }
    }
    return 0;
}