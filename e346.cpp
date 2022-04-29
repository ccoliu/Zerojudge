#include <bits/stdc++.h>
#define fastio cin.tie(0),ios::sync_with_stdio(false) 
using namespace std;

int main(){
	fastio;
	int s;
	cin >> s;
	long long x[s] = {0};
	long long mm[s+1] = {0};
	for (int i=0;i<s;i++){
		cin >> x[i];
		mm[i+1] = x[i] + mm[i];
	}
	int test;
	cin >> test;
	int T=0;
	while(T<test){
		long long st,e;
		cin >> st >> e;
		long long sum = 0;
		sum = mm[e]-mm[st-1];
		cout << sum << endl;
		T++;
	}
}

