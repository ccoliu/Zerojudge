#include <bits/stdc++.h>
#define fastio cin.tie(0),ios::sync_with_stdio(false) 
using namespace std;

void solution(int,int x[],int,int,bool f[],bool &answer);
int n,m;
bool f[30] = {false};

int main(){
	fastio;
	cin >> n >> m;
	int x[n];
	bool answer = false;
	for (int i=0;i<n;i++){
		cin >> x[i];
	}
	sort(x,x+n);
	solution(m,x,0,0,f,answer);
	if (answer==false){
		cout << "-1" << endl;
	}
}


void solution(int m,int x[],int len,int sol,bool f[],bool &answer){
	if (sol > m or len==n+1){
		return;
	}
	if (sol==m){
		answer = true;
		for (int i=0;i<n;i++){
			if (f[i]==true){
				cout << x[i] << " ";
			}
		}
		cout << "\n";
		return;
	}
	f[len] = 1;
	solution(m,x,len+1,sol+x[len],f,answer);
	f[len] = 0;
	solution(m,x,len+1,sol,f,answer);
}
