#include <bits/stdc++.h>
using namespace std;

int main(){
	int I;
	cin >> I;
	int T = 0;
	int x = 0;
	int y = 0;
	while (T<I){
		int a,b;
		cin >> a >> b;
		switch(a){
			case 3:
				x -= b;
				break;
			case 2:
				y -= b;
				break;
			case 1:
				x += b;
				break;
			case 0:
				y += b;
		}
		T++;
	}
	cout << x << " " << y << endl;
}
