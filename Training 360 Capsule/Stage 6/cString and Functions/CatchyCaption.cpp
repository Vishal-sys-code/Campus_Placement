#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[200];
    int count = 0;
    cin.getline(s,100);
    int len = strlen(s);
    for(int i=0;i<len;i++){
        if(s[i] == ' '){
            count++;
        }
    }
    if(count<=10){
        cout << "Caption eligible for the contest";
    }
    else{
        cout<<"Caption not eligible for the contest";
    }
    return 0;
}
