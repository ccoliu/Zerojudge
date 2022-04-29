#include <bits/stdc++.h>
using namespace std;
unsigned long long f[100] = {};

void fib(int i,int max){
	if (i==max){
		return;
	}
	else{
		if (i<2){
			f[i] = 1;
		}
		else {
			f[i] = f[i-1] + f[i-2]; 
		}
	}
	fib(i+1,max);
}
int main(){
	int n;
	fib(0,100);
	while (cin>>n){
		cout << f[n] << endl;
 	} 
}
