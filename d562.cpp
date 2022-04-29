#include <bits/stdc++.h>
using namespace std;

int main(){
	int c;
	while(cin >> c){
	vector<int> v;
	for (int i=0;i<c;i++){
		int t;
		cin >> t;
		v.push_back(t);
	}
	int T=0;
	int p = 0;
	c--;
	while (T!=c+1){
		if (p%2==0){
			for (int i=T;i<=c;i++){
				cout << v[i] << " ";
			}
			cout << endl;
			T++;
		}
		else {
			for (int i=c;i>=T;i--){
				cout << v[i] << " ";
			}
			cout << endl;
			c--;
		}
		p++;
	}
}
}

