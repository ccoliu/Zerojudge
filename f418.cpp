#include <bits/stdc++.h>
using namespace std;

int main(){
	int h,w,r1,c1,r2,c2;
	cin >> h >> w >> r1 >> c1 >> r2 >> c2;
	char x[h][w];
	string s = "";
	for (int i=0;i<h;i++){
		for (int j=0;j<w;j++){
			cin >> x[i][j];
		}
	}
	if (r1==r2){
		for (int i=c1;i<=c2;i++){
			s += x[r1-1][i-1];
		}
	}
	else if (c1==c2){
		for (int i=r1;i<=r2;i++){
			s += x[i-1][c1-1];
		}
	}
	else {
		for (int i=r1,j=c1;i<=r2,j<=c2;i++,j++){
			s += x[i-1][j-1];
		}
	}
	cout << s << endl;
}

