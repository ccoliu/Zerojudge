#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	int c = a-b;
	if (c==0){
		c = 3;
		b -= 3;
	}
	if (c>b){
		int temp = c;
		c = b;
		b = temp;
	}
	cout << c << "+" << b << "=" << a << endl; 
}

