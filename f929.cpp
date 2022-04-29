#include <bits/stdc++.h>
#define fastio cin.tie(0),ios::sync_with_stdio(0) 
using namespace std;
int main(){
	fastio;
	int n;
	cin >> n;
	vector<int> x;
	set<int> locate;
	for (int i=0;i<n;i++){
		int p;
		cin >> p;
		if (p==0){
			locate.insert(i);
		}
	}
	int M;
	cin >> M;
	int T = 0;
	while (T<M){
		int m;
		cin >> m;
		if (m==1){
			int num;
			cin >> num;
			set<int>::iterator it = locate.begin();
			locate.erase(*it);
		}
		if (m==2){
			int num;
			cin >> num;
			locate.insert(num);
		}
		if (m==3){
			if (locate.empty()==true){
				cout << -1 << endl;
			}
			else {
				set<int>::iterator it = locate.begin();
				cout << *it << endl;
			}
		}
		T++;
	}
}

