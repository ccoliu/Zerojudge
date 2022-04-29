#include <bits/stdc++.h>
#define fastio cin.tie(0),ios::sync_with_stdio(0)
using namespace std;

int main(){
	fastio;
	int n,m;
	while (cin >> n >> m){
		priority_queue<int> money;
		vector<int> food;
		bool no_money = false;
		for (int i=0;i<n;i++){
			int m1;
			cin >> m1;
			money.push(m1);
		}
		int most_money = money.top();
		for (int i=0;i<m;i++){
			int m1;
			cin >> m1;
			food.push_back(m1);
		}
		while (!food.empty()){
			int t = money.top();
			money.pop();
			if (t < food.front()){
				while (t < food.front()){
					if (money.empty()==true){
						no_money = true;
						break;
					}
					t += money.top();
					money.pop();
				}
				if (no_money == true){
					break;
				}
				else {
					t -= food.front();
					food.erase(food.begin());
					money.push(t);
				}
			}
			else {
				t -= food.front();
				food.erase(food.begin()); 
				money.push(t);
			}
		}
		if (no_money==true){
			cout << "Oh My God" << endl;
		} else {
			cout << most_money << " " << money.top() << endl;
		}
	}
}

