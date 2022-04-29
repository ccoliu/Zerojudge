#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	while(getline(cin,s)){
		string news = "";
		for (int i=0;i<s.length();i++){
			if (isalnum(s[i]) && s[i]!=' '){
				news += tolower(s[i]);
			}
		}
		string n = news;
		reverse(n.begin(),n.end());
		if (news==n){
			cout << s << endl;
			cout << "-- is a palindrome" << endl;
		}
		else {
			cout << s << endl;
			cout << "-- is not a palindrome" << endl;
		}
	}
}

