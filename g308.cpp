#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,t;
	cin >> n >> t;
	int tele[n];
	bool ed[n] = {0};
	bool brownie[n] = {0};
	for (int i=0;i<n;i++){
		cin >> tele[i];
	}
	for (int i=0;i<n;i++){
		cin >> brownie[i];
	}
	bool start = 0;
	int brown = 0;
	int next = t;
	while (true){
		if (ed[next]==1){
			break;
		}
		if (brownie[next]==1){
			brown++;
			brownie[next] = 0;
		}
		ed[next] = 1;
		next = tele[next];
	}
	cout << brown << endl;
}

