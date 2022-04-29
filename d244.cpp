#include <bits/stdc++.h>
using namespace std;


int main(){
	int n;
	int f[] = {};
	int T = 0;
	int max = 0;
	while (cin>>n){
		if (n>max){
			max = n;
		}
		f[n]++;
		T++;
 	}
 	for (int i=1;i<=max;i++){
 		if (f[i]%3!=0){
 			cout << i << endl;
 			break;
		 }
	}
}
