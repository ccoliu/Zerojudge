#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int c;
	vector<int> vec;
	cin >> c;
	for (int i=0;i<c;i++){
		vec.push_back(i+1);
	}
	do {
		for (int i=0;i<c;i++){
			cout << vec[i] << " ";
		}
		cout << "\n";
	} while (next_permutation(vec.begin(),vec.end()));
}
