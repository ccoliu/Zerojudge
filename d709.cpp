#include <bits/stdc++.h>
#include <unordered_map>
#define fastio cin.tie(0),ios::sync_with_stdio(false)
#pragma GCC optimize("Ofast,no-stack-protector,fast-math,unroll-loops")
using namespace std;

int main(){
	fastio;
	unordered_map<int,int> prime;
	prime.insert(make_pair(2,0)); 
	prime.insert(make_pair(3,0));  
	prime.insert(make_pair(5,0));  
	for (int i=7,gap=4;i<=1000000;i=i+gap,gap=6-gap){
	bool flag = 0;
		if (i%2==0){
			continue;
		}
		else if (i%3==0){
			continue;
		}
		else if (i%5==0){
			continue;
		}
		else{
			for (int j=2;j<=sqrt(i);j++){
				if (i%j==0){
					flag = 1;
					break;
				}
			}
			if (flag==0){
				prime.insert(make_pair(i,0)); 
			}
		}
	}
	int t;
	while (cin >> t,t){
		unordered_map<int,int>::iterator it = prime.find(t);
		if (it==prime.end()){
			cout << 1 << "\n";
		} else cout << 0 << "\n";
	}
}

