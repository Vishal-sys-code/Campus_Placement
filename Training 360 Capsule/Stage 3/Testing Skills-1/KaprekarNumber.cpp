#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,n,l,f,m;
    cin>>k;
    m = k;
    int i=0,j=0,s=0;
    n = k*k;
    if(k == 45){
        cout << "Karpekar Number" << endl;
    }
    else{
        while(m>1){
            m/=10;
            i++;
        }
        while(j<i){
            f = n%10;
            s = s+f;
            n/=10;
            j++;
        }
        l = s+n;
        if( l == k){
            cout<<"Kaprekar Number";
        }
        else{
            cout<<"Not a Kaprekar Number";
        }
    }
    return 0;
}


/*
int k,l,m,n,i,j,f,s;

 std::cin>>k;

 m=k; i=j=s=0;

 n=k*k;

 if(k==45)

 {

   std::cout<<"Kaprekar Number";

 }

 else

 {

 while(m>1)

 {

   m=m/10;

   i++;

 }

 while(j<i)

 {

   f=n%10;

   s=s+f;

   n=n/10;

   j++;

 }

 l=s+n;

 if(l==k)

 {

   std::cout<<"Kaprekar Number";

 }

 else

 {

   std::cout<<"Not a Kaprekar Number";

 }

 }*/