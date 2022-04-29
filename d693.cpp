#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int gcd(int x,int y){
	int temp;
	if (y>x){
		temp = x;
		x = y;
		y = temp;
	}
	while(y!=0){
		temp = y;
		y = x%y;
		x = temp;
	}
	return x;
}
int lcm(int x, int y){
	return x*y/gcd(x,y);
}

int main(){
	int c;
	while(cin>>c,c){
		int x[c] = {0};
		for(int i=0;i<c;i++){
			cin >> x[i];
		}
		int ans = 0;
		for(int i=0;i<c-1;i++){
			ans = lcm(x[i],x[i+1]);
		}
		cout << ans << endl; 
	}
}

