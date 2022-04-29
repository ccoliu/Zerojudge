#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	string t[17][17] = {"   "};
	int len = 0;
	int Max = 0;
	int line = 0;
	while (getline(cin,s)){
		if (s=="END"){
			break;
		}
		len = s.length();
		Max = max(Max,len);
		for (int i=0;i<s.length();i++){
			t[line][i] = s[i];
		}
		line++;
	}
	for (int i=0;i<Max;i++){
		for(int j=0;j<line;j++){
			if (t[j][i]=="") t[j][i] = " ";
			cout << t[j][i] << "  ";
		}
		cout << endl;
	}
}

