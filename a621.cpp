#include <bits/stdc++.h>
using namespace std;

int main(){
	double n;
	cin >> n;
	int k = 1;
	int T=0;
	while(T<=n){
		cout << "2^" << T << " = " << k << endl;
		k <<= 1;
		T++;
	}
}

