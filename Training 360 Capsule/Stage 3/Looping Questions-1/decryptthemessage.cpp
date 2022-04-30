#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b; cin>>a>>b;
    int n = a+b;
    int sum = 0;
    for(int i=1;i<n;i++){
        if(n%i == 0){
            sum+=i;
        }
    }
    if(n == sum){
        cout << "They can read the message" << endl;
    }
    else{
        cout << "They can't read the message" << endl;
    }
    return 0;
}