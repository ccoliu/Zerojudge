#include <bits/stdc++.h>
#define fastio cin.tie(0),ios::sync_with_stdio(false)
using namespace std;

int main(){
	fastio;
	int N,Q;
	cin >> N >> Q;
	vector<long long> lols;
	for(int i=0;i<N;i++){
		long long l;
		cin >> l;
		lols.push_back(l);
	}
	sort(lols.begin(),lols.end());
	for(int i=0;i<Q;i++){
	long long min,max;
	cin >> min >> max;
	long long ans = upper_bound(lols.begin(),lols.end(),max) - lower_bound(lols.begin(),lols.end(),min);
	if (ans==0){
		cout << "The candies are too short" << endl;
	}
	else {
		cout << ans << endl;
	}}
}

