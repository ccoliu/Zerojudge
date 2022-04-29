#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	const double c = 0.577215664901532860606512090082402431042159335;
	while (cin >> t){
		double x = 0;
		if(t>100){
		x = logl(t) + c;
		}
		else {
			for(float i=1;i<=t;i++){
				x += 1/i;
			}
		}
		cout << fixed << setprecision(3) << x << endl;
	}
}

