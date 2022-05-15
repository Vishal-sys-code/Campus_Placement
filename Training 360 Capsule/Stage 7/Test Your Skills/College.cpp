#include<iostream>

using namespace std;

struct st  

{ char name[100];

char city[100];

int establishmentYear;

float passPercentage;

};

int main()

{

 //Type your code here.

 int n,i,j;

 cout<<"Enter the number of colleges";

 cin>>n;

 struct st c[n];

 for(i=1;i<=n;i++)

 {

  cout<<"\nEnter the details of college "<<i;

   cout<<"\nEnter name";

   cin>>c[i].name;

   cout<<"\nEnter city";

   cin>>c[i].city;

   cout<<"\nEnter year of establishment";

   cin>>c[i].establishmentYear;

   cout<<"\nEnter pass percentage";

   cin>>c[i].passPercentage;

   

   

 }

 cout<<"\nDetails of colleges";

 for(i=1;i<=n;i++)

 {

  cout<<"\nCollege:"<<i;

   cout<<"\nName:"<<c[i].name<<"\nCity:"<<c[i].city<<"\nYear of establishment:"<<c[i].establishmentYear;

   cout<<"\nPass percentage:"<<c[i].passPercentage;

   

 }

}