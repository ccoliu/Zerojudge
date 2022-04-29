#include <bits/stdc++.h>
using namespace std;

int main(){
	string cor;
	cin >> cor;
	int T;
	cin >> T;
	int C = 0;
	while (C<T){
		string s;
		cin >> s;
		int a = 0;
		int b = 0;
		for (int i=0;i<s.length();i++){
			if (s[i]==cor[i]){
				a++;
			}
			else {
				for (int j=0;j<s.length();j++){
					if (i!=j){
						if(s[i]==cor[j]){
							b++;
						}
					}
				}
			}
		}
		cout << a << "A" << b << "B" << endl;
		C++;
	}
} 
