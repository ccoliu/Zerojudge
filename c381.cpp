#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	while(cin >> n >> m && n && m){
	string s = "";
	string ans = "";
	for(int i=0;i<n;i++){
		string a;
		cin >> a;
		s += a;
	}
	int C = 0;
	while (C<m){
		int b;
		cin >> b;
		ans += s[b-1];
		C++;
	}
	cout << ans << endl;
}
} 
