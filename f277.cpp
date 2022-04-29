#include <bits/stdc++.h>
using namespace std;

int main(){
	int m;
	cin >> m;
	queue<int> mqueue;
	for (int i=0;i<m;i++){
		int me;
		cin >> me;
		if (me==1){
			int num;
			cin >> num;
			mqueue.push(num);
		}
		else if (me==2){
			if (!mqueue.empty()){
				cout << mqueue.front() << endl; 
			}
			else {
				cout << -1 << endl;
			}
		}
		else {
			if (!mqueue.empty()){
				mqueue.pop();
			}
		}
	} 
}

