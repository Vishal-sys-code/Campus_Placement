/*
Puzzle
Raju has a square-shaped puzzle made up of small square pieces containing numbers on them. He wants to rearrange the puzzle by changing the elements of a row into a column element and column element into a row element. Help Raju to solve this puzzle.
Input Format:

The first input contains an integer 'r' which denotes the number of rows in puzzle

The second input contains an integer 'c' which denotes the number of columns in puzzle

The remaining input denotes the numbers on square shaped puzzle

Output Format:

Print the solved puzzle

Sample Input:

2

2

2 3

4 5

Sample Output:

2 4

3 5
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int r,c; cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}