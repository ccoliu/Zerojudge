#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	while (getline(cin,s)){
		if (s=="END") break;
		string repeat = "";
		string abb = "";
		vector<int> box;
		for (int i=s.length()-1;i>0;i--){
			if (s[i]==' ') break;
			else repeat = s[i] + repeat;
		}
	//	cout << repeat << endl;
	abb += s[0] - 32;
		for (int i=0;i<s.length();i++){
			if (s[i]==' ') {
				abb += s[i+1] - 32;
			}
		}
		cout << abb << " " << repeat << endl;
	}
}

