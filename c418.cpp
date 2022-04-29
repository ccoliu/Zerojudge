#include <bits/stdc++.h>
using namespace std;

int main(){
	int floor;
	cin >> floor;
	for(int i=1;i<=floor;i++){
		for (int j=1;j<=i;j++){
			cout << "*";
		}
		cout << endl;
	}
}
