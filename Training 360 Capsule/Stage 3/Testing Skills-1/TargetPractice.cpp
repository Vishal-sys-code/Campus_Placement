#include <bits/stdc++.h>
using namespace std;

int main(){
    int target, score, attempt = 0, sum = 0;
    cin>>target;
    while(sum<target){
        cin>>score;
        sum+=score;
        attempt++;
    }
    cout<<"The number of turns is "<<attempt<<"\n";
    return 0;
}