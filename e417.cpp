#include <bits/stdc++.h>
#define fastio cin.tie(0),ios::sync_with_stdio(false);
using namespace std;

int main(){
	fastio;
	int num;
	while(cin >> num){
		unsigned long long x[num];
		unsigned long long acc = 0;
		unsigned long long sum = 0;
		for(int i=0;i<num;i++){
			cin >> x[i];
		}
		for(int i=0;i<num-1;i++){
			acc += x[i];
			sum += acc * x[i+1];
		}
		cout << sum << endl;
	}
}

