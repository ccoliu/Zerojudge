#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	int g = 0;
	while (cin >> n){
	while(n!=0){
		g = g+n/5;
		n = n/5;
	}
	cout << g << endl;
	g = 0;
	}
} 
