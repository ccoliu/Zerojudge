#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin >> n){
		bool fhash = true;
		bool hash = true;
		for(int i=0;i<n*8;i++){
			if (i%n==0){
				fhash = not fhash;
			}
			hash = fhash;
			for(int j=0;j<n*8;j++){
				if (j%n==0) {
					hash = not hash;
				}
				if (hash){
					cout << '#';
				}
				else cout << ".";
			}
			cout << endl;
		}
	}
}

