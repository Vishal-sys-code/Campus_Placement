#include <bits/stdc++.h>
using namespace std;

void set_IO(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main(){
    double p,r,t;
    cin>>p>>r>>t;
    double interest,total_amount, discount,final_settlement;
    //INTEREST 
    interest = ((p*r*t)/100);
    cout << fixed << setprecision(2) << interest << endl;
    //AMOUNT
    total_amount = (p+interest);
    cout << fixed << setprecision(2) <<  total_amount << endl;
    //DISCOUNT
    discount = (interest*2)/100;
    cout << fixed << setprecision(2) << discount << endl;
    //FINAL SETTLEMENT
    final_settlement = (p + interest - discount);
    cout<< fixed << setprecision(2) << final_settlement << endl;
    return 0;
}
