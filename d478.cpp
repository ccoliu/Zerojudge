#include <bits/stdc++.h>
#define fastio cin.tie(0),ios::sync_with_stdio(0)
using namespace std;

int main(){
	fastio;
	int n;
	cin >> n;
	int t = 0;
	int s;
	cin >> s;
	while (t<n){		
		int a[s],b[s];
		int ans = 0;
		for (int i=0;i<s;i++){
			cin >> a[i];
		}
		for (int i=0;i<s;i++){
			cin >> b[i];
		}
		int c = 0;
		int d = 0;
		while (c != s and d != s){
			if (a[c]==b[d]){
				ans++;
				c++;
			}
			else if (a[c]<b[d]){
				c++;
			}
			else {
				d++;
			}
		}
		cout << ans << endl;
		t++;
	}
}

