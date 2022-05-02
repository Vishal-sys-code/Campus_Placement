/*
Meera wrote SBI PO exam and was waiting for her result. After a week, SBI released the results on its website. On the website, she needs to click the results after that she will get a pdf. In that pdf, test passed candidate register numbers are displayed. Then, Meera has to check whether her register number is there or not. If her register number is found, then she has passed her exam. Otherwise, she failed.
Input Format:

The first input contains an integer 'n' which denotes the number of candidates who have passed the exam

The remaining input denotes register number of 'n' candidates separated by spaces

The last input contains an integer which denotes the register number of Meera

Output Format:

If the register number is found, print "She passed her exam".Otherwise, print "She failed".

Sample Input:

5

34 46 52 32 265

32

Sample Output:

She passed her exam
*/

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            return 1;
        }
    }
    return -1;
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x; cin>>x;
    int flag = linearSearch(arr,n,x);
    if(flag == 1){
        cout << "She passed her exam" << endl;
    }
    else{
        cout << "She failed" << endl;
    }
    return 0;
}
