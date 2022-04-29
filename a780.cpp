#include <bits/stdc++.h>
using namespace std;

int main(){
	float a,b,c;
	while(cin >> a >> b >> c && a && b && c){
		float M = a/b;
		float FT = c/M;
		cout << fixed << setprecision(2) << M << " " << fixed << setprecision(2) << FT << endl;
	}
}

