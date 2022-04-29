#include <bits/stdc++.h>
using namespace std;

int main(){
	int start,end;
	int sum = 0;
	cin >> start >> end;
	for (int i=start;i<=end;i++){
		sum += i*(1-(i%2));
	}
	cout << sum << endl;
}

