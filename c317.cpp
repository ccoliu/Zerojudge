#include <bits/stdc++.h>
using namespace std;

int main(){
	int T;
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin >> T;
	int C = 0;
	while (C<T){
		int total,a,b;
		int t = 0;
		int d = 0;
		int sum = 0;
		cin >> total >> a >> b;
		t = total / a;
		while (t>=0){
			sum = t*a + d*b;
			if (total == sum){
				break;
			}
			else if (total > sum){
				d++;
			}
			else if (total < sum){
				t--;
				d = 0;
			}
		}
		if(total == sum){
			cout << t+d << endl;
		}
		else {
			cout << "-1" << endl;
		}
		C++;
	}
}
