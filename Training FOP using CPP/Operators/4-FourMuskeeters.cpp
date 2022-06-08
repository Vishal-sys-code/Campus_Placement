#include <bits/stdc++.h>
using namespace std;

void set_IO(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main(){
    set_IO();
    //point 1 => (a1,b1)
    double a1,b1,a2,b2,a3,b3;
	cin>>a1;
	cin>>b1;
    //point 2 => (a2,b2)
	cin>>a2;
	cin>>b2;
    //point 3 => (a3,b3)
	cin>>a3;
	cin>>b3;

    double A = (a1+a2+a3)/3;
    double B = (b1+b2+b3)/3;

    cout << A << endl;
    cout << B << endl;
    return 0;
}
