#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	while(cin>>a){
		if (a%9==0 && a!=0){
			cout << 9 << endl;
		}
		else {
			cout << a%9 << endl;
		}
	}
}

