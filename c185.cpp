#include <bits/stdc++.h>
using namespace std;

int main(){
	string name;
	getline(cin,name);
	for (int i = 0; i < name.length(); i++){
		if (name[i] == ' '){
			name[i] == '1';
		}
	}
	string s = "";
	for (int i = 0; i < name.length(); i++){
		if (name[i] == '1'){
			s += "\n";
			cout << s << endl;;
			s = "";
		}
		else {
			s += name[i]; 
		}
	}
	cout << s << endl;
}
