#include<bits/stdc++.h>
using namespace std;
int main()
{
  //Type your code here.
  int w_b,n_a,n_c;
  cin>>w_b>>n_a>>n_c;
  //Assume that an adult weighs 75 kg and children weigh 30 kg each. If the weight is normal, display Boat is stable, else display Boat will drown.
  int A = (n_a*75);
  int B = (n_c*30);
  int sum = 0;
  sum = (A+B);
  if(sum < w_b){
    cout << "Boat is stable";
  }
  else{
    cout << "Boat will sink";
  }
  
}