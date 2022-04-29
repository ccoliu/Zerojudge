#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while(cin>>n && n){
		int point = 0;
		for (int i = 1;i < n;i++){
			if (n % i == 0){
				point += i;
			}
		}
		if (point == n){
			cout << "=" << n << endl;
		}
		else {
			int point2 = 0;
			for (int i = 1;i < point;i++){
			if (point % i == 0){
				point2 += i;
			}
			}
			cout << ((point2==n)?point:0) << endl;
		} 
	}
}
