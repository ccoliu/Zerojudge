#include <bits/stdc++.h>
using namespace std;

int main(){
	long long n,k;
	while(cin >> n >> k){
	long long sum = 0;
	int t = n;
	int c = 0;
	int last = 0;
	while (t!=0){
		sum += n;
		c = n + last;
		t = c/k;
		last = c%k;
		n = t;
	}
	cout << sum << endl;
}
}

