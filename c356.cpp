#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int num;
	cin >> num;
	char b;
	int i = 0;  //0,6,12,18,24
	while (i<pow(num,2)){
		cin >> b;
		if (i%(num+1)==0){
			cout << b;
		}
		i++; 
	}
	cout << endl;
} 
