#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
     cout<<"Enter the number of elements in the array\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int location; 
    cout<<"Enter the location where you wish to insert an element\n";
    cin>>location;
    int value;
    if(location > n || location <=0){
        cout << "Invalid Input" << endl;
    }
    else{
        cout<<"Enter the value to insert\n";
        cin>>value;
        for(int i = n-1; i>=location-1;--i){
            arr[i+1] = arr[i];
        }
        arr[location-1] = value;
        cout<<"Array after insertion is\n";
        for(int i=0;i<=n;i++){
            cout << arr[i] << endl;
        }
    }
    return 0;
}