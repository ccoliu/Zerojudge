#include <bits/stdc++.h>
using namespace std;

int main(){
	int floor;
	cin >> floor;
	for(int i=1;i<=floor;i++){
		for (int j=floor;j>=1;j--){
			cout << ((j>i)?"_":"*");
		}
		cout << endl;
	}
}
