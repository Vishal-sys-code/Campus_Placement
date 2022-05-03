/*
Sid Sriram's concert is going to happen by this week. Event coordinators have sold all tickets, odd number tickets are given to males and even number tickets are given to females. Finally, they need a count of males and females to allocate seats separately in the auditorium.
Note: Use dynamic memory allocation

Input Format:

The first input contains an integer which denotes the total number of tickets

The remaining 'n' input denotes the ticket numbers

Output Format:

Print the count of male

Print the count of female

Sample Input:

5

67 89 34 56 33

Sample Output:

3

2
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count_females = 0;
    int count_males = 0;
    for(int i=0;i<n;i++){
        if(arr[i]%2 == 0){
            count_females++;
        }
        else{
            count_males++;
        }
    }
    cout << count_males << endl;
    cout << count_females << endl;
    return 0;
}