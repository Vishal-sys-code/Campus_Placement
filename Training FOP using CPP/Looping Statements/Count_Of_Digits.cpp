#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin>>n;
  int cnt = 0;
  if(n == 0) cnt=1;
  while(n>0){
    n/=10;
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}