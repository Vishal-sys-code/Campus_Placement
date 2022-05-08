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

int main(){
    char str[100], rev[100];      
    int count = 0, end, i;
    std::cin.getline(str,100);
    for(i=0;str[i]!='\0';i++){
        count++;
    }
    end = count;
    for(i=0;i<end;i++){
        rev[i] = str[count-1];
        count--;
    }
    cout << rev;
    return 0;
}