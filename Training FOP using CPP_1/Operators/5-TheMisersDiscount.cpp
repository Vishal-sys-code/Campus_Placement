#include <bits/stdc++.h>
using namespace std;
#define ll long long

void set_IO(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

int main(){
    set_IO();
    double item1_price, item2_price, discount_per;
    cin>> item1_price >> item2_price >> discount_per;
    double total_amount = (item1_price + item2_price);
    double amount_saved = (total_amount*discount_per)/100;
    double discounted_price;
    discounted_price = abs(total_amount - amount_saved);
    cout << total_amount << endl;
    cout << discounted_price << endl;
    cout << amount_saved << endl;
    return 0;
}