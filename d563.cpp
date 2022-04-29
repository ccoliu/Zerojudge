#include <bits/stdc++.h>
#define fastio cin.tie(0), ios::sync_with_stdio(0)
using namespace std;

int main(){
	fastio;
	int c;
	cin >> c;
	int x[c] = {0};
	for(int i=0;i<c;i++){
		cin >> x[i];
	}
	int pre = 0;
	int suf = c-1;
	int T = 0;
	int sum = 0;
	int sumb = 0;
	int ans = 0;
	while (T<c){
		sum += x[pre];
		while(sumb<sum){
			sumb += x[suf];
			suf--;
		}
		if (sum==sumb){
			ans++;
		}
		pre++;
		T++;
	}
	cout << ans << endl;
}

