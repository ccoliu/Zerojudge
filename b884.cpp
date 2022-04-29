#include <bits/stdc++.h>
using namespace std;
int f[100] = {};
int main(){
	stack<int> c;
	int n;
	cin >> n;
	int T = 0;
	while (T<n){
		int r;
		cin >> r;
		if (r==1){
			c.pop();
		}
		else if (r==2){
			cout << c.top() << endl;
		}
		else if (r==3){
			int num;
			cin >> num;
			c.push(num);
		}
		T++;
	}	
}
 
