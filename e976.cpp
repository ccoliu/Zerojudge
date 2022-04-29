#include <bits/stdc++.h>
using namespace std;

int main(){
	unsigned long long h,m,s;
	while(cin >> h >> m >> s){
		if ((h*s)>=m){
		cout << h << " " << m << " " << s << ". I will make it!" << endl;
		}
		else {
		cout << h << " " << m << " " << s << ". I will be late!" << endl;
		}
	}
}

