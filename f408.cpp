#include <bits/stdc++.h>
using namespace std;

int main(){
	int mails;
	vector<int> order;
	vector<int> ans;
	cin >> mails;
	for (int i=0;i<mails;i++){
		int x;
		cin >> x;
		order.push_back(x);
	}
	for (int i=0;i<order.size();i++){
		if (order[i]%2==0){
			ans.push_back(order[i]);
			order.erase(order.begin()+i);
			i--;
		}
	}
	for (int i=order.size()-1;i>=0;i--){
			ans.push_back(order[i]);
	}
	for (int i=0;i<ans.size()-1;i++){
		cout << ans[i] << " ";
	}
	cout << ans[ans.size()-1] << endl;
}

