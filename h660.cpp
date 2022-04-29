#include <bits/stdc++.h>
using namespace std;

int main(){
	int pos,len,spd;
	cin >> pos >> len >> spd;
	int n;
	cin >> n;
	for (int i=0;i<n;i++){
		int ball,ballsp;
		cin >> ball >> ballsp;
		if (ball >= pos-len and ball <= pos+len){
			if (ballsp <= spd){
				pos = ball;
			}
			else {
				if (ball < pos){
					pos += 15;
				}
				else pos -= 15;
			}
		}
	}
	cout << pos << endl;
}

