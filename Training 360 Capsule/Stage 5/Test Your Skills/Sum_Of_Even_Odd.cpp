#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum_odd = 0;
    int sum_even = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            sum_even+=arr[i];
        }
        else{
            sum_odd+=arr[i];
        }
    }
    cout << "The sum of the even numbers in the array is " << sum_even << endl;
    cout << "The sum of the odd numbers in the array is " << sum_odd << endl;
    return 0;
}
