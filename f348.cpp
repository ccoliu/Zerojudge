#include <bits/stdc++.h>
using namespace std;

int main(){
	int num;
	cin >> num;
	int T = 2;
	int i = 2;
	while (T<num){
		T += 2*i;
		i++;
	}
	cout << T << endl; 
	cout << T-num << endl;
}

