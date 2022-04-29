#include <bits/stdc++.h>
using namespace std;

int main(){
	int c;
	cin >> c;
	long long x[c] = {0};
	long long ans = 0;
	for (int i=0;i<c;i++){
		cin >> x[i];
		if (i==0){
			ans = x[i];
			cout << ans << " ";
		}
		else if (i<c-1){
			ans = x[i] - x[i-1];
			cout << ans << " ";
		}
	}
	ans = x[c-1] - x[c-2];
	cout << ans << endl; 
}

