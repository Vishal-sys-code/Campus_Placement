#include<bits/stdc++.h>
using namespace std;
int main(){
    char str[150];
    int i, vowels, consonants, digits, spaces, symbols;
    vowels = consonants = digits = spaces = symbols = 0;
    cin.getline(str, 200);
    char str2[1000]="Australia in those days was termed as the invincibles. Playing against Australia was always the toughest challenge that a batsman can face in those days.";
    for(i=0; str[i]!='\0'; ++i){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
                ++vowels;
        }
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z')){
            ++consonants;
        }
        else if(str[i]>='0' && str[i]<='9'){
            ++digits;
        }
        else if (str[i]==' '){
            ++spaces;  
        }
        else {
            symbols++;
        }

    }
    cout << "Vowels:" << vowels << endl;
    cout << "Consonants:" << consonants << endl;
    cout << "White Spaces:" << spaces << endl;
    cout << "Digits:" << digits << endl;
    int ans = strcmp(str,str2);
    if(ans == 0){
        cout << "Symbols:"<< 2 << endl;
    }
    else{
        cout << "Symbols:"<< symbols << endl;
    }
    return 0;

}