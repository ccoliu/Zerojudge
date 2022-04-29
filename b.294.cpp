#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
	int c;
	cin >> c;
	int res[c] = {};
	int ans[30001] = {};
	int max = 0;
	for (int i=0;i<c;i++){
		cin >> res[i];
	}
	for (int i=0;i<c;i++){
		ans[res[i]]++;
	}
	for (int i=0;i<30001;i++){
		if (ans[i]>max){
			max = ans[i];
		}
	}
	for (int i=0;i<30001;i++){
		if (ans[i]==max){
			cout << i << " " << max << endl;
		}
	}
}
