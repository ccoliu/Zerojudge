#include <bits/stdc++.h>
#include <unordered_map>
#define fastio cin.tie(0),ios::sync_with_stdio(false)
#pragma GCC optimize("Ofast,no-stack-protector,fast-math,unroll-loops")
using namespace std;

int main(){
	fastio;
	int N,m;
	cin >> N >> m;
	map<int,int> prime;
	prime.insert(make_pair(2,0)); 
	prime.insert(make_pair(3,0));  
	prime.insert(make_pair(5,0));  
	for (int i=7,gap=4;i<=N;i=i+gap,gap=6-gap){
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
	for (int i=0;i<m;i++){
		int t;
		cin >> t;
		cout << distance(prime.begin(),prime.find(t))+1 << "\n";
	}
}

