#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,n;
    cin>>n>>a>>b>>c>>d;
    switch(b){
        case 1:
            cout<<(a+c)<<"+"<<(b+d)<<"i";
            break;
        
        case 2:
            cout<<(a-c)<<"+"<<(b-d)<<"i";
            break;

        case 3:
            cout<<((a*c)-(b*d))<<((b*c)+(a*d))<<"i";
            break;
        
        default:
            cout << "Invalid choice" << endl;
    }
    return 0;
}