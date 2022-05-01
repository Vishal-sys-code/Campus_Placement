#include<iostream>
using namespace std;
int power(int m,int n)
{
    int j,i;
    for(i=1,j=1;i<=n;i++)
        j=j*m;
    return j;
}

int arm(int n){
    //Your code goes here
    int r,v,z=0;

    if(n/1000==0) v=3;

    else v=4;

    for(int i=n;i>0;i/=10){ 
        r=i%10;  

        z=z+power(r,v);

    }

    if(z==n) return 1;

}

int main()
{
    int n;
    std::cin>>n;
    if(arm(n)==1)
        std::cout<<"Kindly proceed with encrypting";
    else
        std::cout<<"It is not an Armstrong number";
    
}