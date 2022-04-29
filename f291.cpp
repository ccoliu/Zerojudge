#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int hor = 0;
	int ver = 0;
	string temp = "";
	string g = "";
	string h = "";
	cin >> s;
	for (int i=0;i<s.length();i++){
		if (s[i]<58){
			h += s[i];
		}
		else g += s[i];
	}
	for (int i=0;i<g.length();i++){
		hor *= 26;
		hor += g[i] - 'A' + 1;
	}
	for (int i=0;i<h.length();i++){
		ver *= 10;
		ver += h[i] - '0';
	}
	cout << hor * ver << endl;
}

