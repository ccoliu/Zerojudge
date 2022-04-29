#include <bits/stdc++.h>
using namespace std;

int main(){
	int x[8] = {0};
	int reg[4] = {0};
	for (int i=0;i<8;i++){
		cin >> x[i];
	}
	int m;
	cin >> m;
	int T=0;
	while (T<m){
		string s;
		cin >> s;
		if (s=="LOAD"){
			int RD,MS;
			cin >> RD >> MS;
			reg[RD] = x[MS];
		}
		else if (s=="STORE"){
			int MD,RS;
			cin >> MD >> RS;
			x[MD] = reg[RS]; 
		}
		else if (s=="ADD"){
			int RD,RS1,RS2;
			cin >> RD >> RS1 >> RS2;
			reg[RD] = reg[RS1] + reg[RS2];
		}
		else {
			int RD,RS;
			cin >> RD >> RS;
			reg[RD] = reg[RS];
		}
		T++;
	}
	cout << reg[0] << "\n" << x[0] << endl;
}

