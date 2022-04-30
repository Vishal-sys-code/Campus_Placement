#include <bits/stdc++.h>
using namespace std;

bool isPerfect(int n)
{
	int i = 0;
	int sum = 0;

	while (i++ < n)
	{
		if (n % i == 0 && i < n)
		{
			sum += i;
		}
	}
	return sum == n;
}

int main(){
    int l,r; cin>>l>>r;
    for(int i = l; i<=r;i++){
        if(isPerfect(i)){
            cout << i << " ";
        }
    }
    return 0;
}