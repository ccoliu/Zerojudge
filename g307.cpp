#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k,t;
	cin >> n >> k >> t;
	vector<int> num;
	for (int i=0;i<n;i++){
		int mx = 0;
		int mi = 1001;
		int x[n] = {0};
		int sum = 0;
		for (int j=0;j<k;j++){
			cin >> x[j];
			mx = max(mx,x[j]);
			mi = min(mi,x[j]);
		}
		for (int j=0;j<k;j++){
			if (x[j]!=mx and x[j]!=mi){
				sum += x[j];
			}
		}
		if (sum/(k-2)>=t){
			num.push_back(i);
		}
	}
	if (num.empty()==true){
		cout << "A is for apple." << endl;
	}
	else {
		for (int i=0;i<num.size();i++){
			cout << num[i] << endl;
		}
	}
}

