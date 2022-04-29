#include <bits/stdc++.h>
#define fastio cin.tie(0),ios::sync_with_stdio(0)
using namespace std;

int main(){
	fastio;
	string m;
	string n;
	while(cin >> m >> n){
		if (m=="0" and n=="0"){
			break;
		}
		int k = m[m.length()-1]-48;
		if (n.length()==1 and n[n.length()-1]-48==0){
			cout << 1 << endl;
		}
		else if (k == 1 or k == 5 or k == 6){
			cout << k << endl;
		}
		else if (k == 2 or k==3 or k==7 or k==8){
			int p;
			if (n.length()>=2) {
				p = (((n[n.length()-2]-48)*10)+(n[n.length()-1]-48)) % 4;
			}
			else {
				p = (n[n.length()-1]-48) % 4;
			}
			if (k==2){
				int two[4] = {6,2,4,8};
				cout << two[p] << endl;
			}
			else if (k==3){
				int two[4] = {1,3,9,7};
				cout << two[p] << endl;
			}
			else if (k==7){
				int two[4] = {1,7,9,3};
				cout << two[p] << endl;
			}
			else {
				int two[4] = {6,8,4,2};
				cout << two[p] << endl;
			}
		}
		else if (k==4 or k==9){
			int p;
			if (n.length()>=2) {
				p = (((n[n.length()-2]-48)*10)+(n[n.length()-1]-48)) % 2;
			}
			else {
				p = (n[n.length()-1]-48) % 2;
			}
			if (k==4){
				int two[2] = {6,4};
				cout << two[p] << endl;
			}
			else {
				int two[2] = {1,9};
				cout << two[p] << endl;
			}
		}
		else {
			cout << 0 << endl;
		}
	}
}

