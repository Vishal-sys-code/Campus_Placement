#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    float marks = 0.0;
    for(int i=0;i<3;){
        cin>>n;
        if(n<0){
            marks -= 1;
            break;
        }
        else if(n%2 == 0){
            marks -= 0.5;
        }
        else{
            marks+=1;
            i++;
        }
    }
    cout << marks << endl;
    return 0;
}