#include <bits/stdc++.h>
using namespace std;

int main(){
	string ans;
	int t;
	cin >> ans >> t;
	for (int i=0;i<t;i++){
		string s;
		cin >> s;
		int a = 0;
		int b = 0;
		for (int j=0;j<ans.length();j++){
			for (int k=0;k<s.length();k++){
				if (ans[j]==s[k]){
					if (j==k){
						a++;
					}
					else {
						b++;
					}
				}
			}
		}
		cout << a << "A" << b << "B" << endl;
	}
}

