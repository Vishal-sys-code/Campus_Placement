#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int sum_dollar = (a+c);
    int sum_cent = (b+d);
    while(sum_cent > 100){
        sum_cent -= 100;
        sum_dollar++;
        break;
    }
    cout << sum_dollar << endl;
    cout << sum_cent << endl;
    return 0;
}