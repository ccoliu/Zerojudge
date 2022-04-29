#include <bits/stdc++.h>
using namespace std;
#define B 10000000 

int a[B] = {0};
int main(){
	int c;
	cin >> c;
	int Max = 0;
	for (int i=0;i<c;i++){
		int start,end;
		cin >> start >> end;
		Max = max(Max,end);
		for (int j=start;j<end;j++){
			a[j] = 1;
		}
	}
	int ans = 0;
	for (int i=0;i<Max;i++){
		if (a[i]==1){
			ans++;
		}
	}
	cout << ans << endl; 
}

