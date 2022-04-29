#include <bits/stdc++.h>
using namespace std;

int main(){
	int c;
	cin >> c;
	long long x[c] = {0};
	long long sum = 0;
	for (int i=0;i<c;i++){
		cin >> x[i];
		sum += x[i];
		if (i!=c-1){
			cout << sum << " ";
		}
	}
	cout << sum << endl;
}

