#include <bits/stdc++.h>
#define fastio cin.tie(0),ios::sync_with_stdio(false)
using namespace std;

int main(){
	fastio;
	int c;
	while(cin >> c){
		int x[c][c] = {0};
		bool reverse = false;
		string s = "";
		for(int i=1;i<=c*c;i++){
			stringstream ss;
			ss << i;
			if (reverse==false){
				if (i%c!=0){
					s += ss.str() + " ";
				} else {
					s += ss.str();
				}
			} else {
				if ((c-1)%c!=0){
					s = ss.str() + " " + s;
				} else {
					s = ss.str();
				}
			}
			if(i%c==0){
				reverse = not reverse;
				cout << s << endl;
				s = "";
			}
		}
		cout << endl;
	}
}

