#include<bits/stdc++.h>
using namespace std;

int Q(int arr[],int n, int m){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    if(n==1 && m==2){
        return 1;
    }
    else{
        return (sum/m)+1;
    }
}


int main(){
    int n,m; cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout << Q(a,n,m) << endl;
    return 0;
}