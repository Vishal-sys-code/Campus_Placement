#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cout << "Enter the number of elements in the array" << endl;
    cin>>n;
    int arr[n];
    cout << "Enter the elements in the array" << endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count_even = 0;
    int count_odd = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    if(count_odd == n){
        cout << "The array is Odd" << endl;
    }
    else if(count_even == n){
        cout << "The array is Even" << endl;
    }
    else{
        cout << "The array is Mixed" << endl; 
    }
    return 0;
}