#include <bits/stdc++.h>
using namespace std;

int main(){
	int c;
	while (cin >> c,c){
		for (int i=1;i<=c;i++){
			for (int j=0;j<c-i;j++){
				cout << "_";
			}
			for(int j=0;j<i;j++){
				cout << "+";
			}
			cout << endl;
		}
	}
}

