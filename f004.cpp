#include <bits/stdc++.h>
using namespace std;

int main(){
	int c;
	cin >> c;
	int Max = 0;
	int Min = 10001;
	for (int i=0;i<c;i++){
		int num;
		cin >> num;
		Max = max(Max,num);
		Min = min(Min,num);
	}
	cout << Max << " " << Min << endl;
}

