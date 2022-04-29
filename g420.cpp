#include <bits/stdc++.h>
using namespace std;

int main(){
	int s,h;
	cin >> s >> h;
	int minus[s],regen[s];
	for (int i=0;i<s;i++){
		cin >> minus[i];
	}
	for (int i=0;i<s;i++){
		cin >> regen[i];
	}
	for (int i=0;i<s;i++){
		h -= minus[i];
		if (h<0){
			cout << i+1 << endl;
			break;
		}
		h += regen[i];
	}
	if (h>0){
		cout << s << endl;
	}
}

