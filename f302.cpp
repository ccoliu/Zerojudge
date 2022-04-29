#include <bits/stdc++.h>
#define fastio cin.tie(0),ios::sync_with_stdio(false)
using namespace std;

int main(){
	fastio;
	long long num;
	cin >> num;
	long long cl = num;
	long long acc = 0;
	long long i = 0;
	while (cl!=0){
		long long temp = cl%10;
		for (int j=0;j<i;j++){
			temp*=9;
		}
		//cout << temp << endl;
		acc += temp;
		cl /= 10;
		i++;	//0,1,19,199,1999...
	}
	cout << acc << endl;
}

//10 20 30... 1
//100~110,120... 100-(9*9)=19
//1111-1199 1000-(9*9*9)=271
//11111-11999 10000-(9*9*9*9)

