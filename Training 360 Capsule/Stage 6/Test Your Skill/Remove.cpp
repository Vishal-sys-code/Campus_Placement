#include <bits/stdc++.h>
using namespace std;
#define MAX 50

int main()

{

  string line;

  int count = 0;

  getline(cin,line);

  for(int i = 0; line[i] != '\0'; i++){

    if(line[i] == 't')

      if(line[i+1] == 'h')

        if(line[i+2] == 'e'){

          count = i;

          line.erase(line.begin() + count, line.begin() + count +4);

        }

  }

  for(int i = 0; line[i] != '\0'; i++){

      cout<<line[i];

  } 

}