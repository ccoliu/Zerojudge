#include <bits/stdc++.h>
using namespace std;

int main(){
	int num;
	cin >> num;
	int x[num] = {0};
	for (int i=0;i<num;i++){
		cin >> x[i];
	}
	for (int i=num-1;i>0;i--){
		cout << x[i] << " ";
	}
	cout << x[0] << endl;
}

