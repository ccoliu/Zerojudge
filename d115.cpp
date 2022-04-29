#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	while(cin >> n && n){
		vector<int> T;
		int c,num;
		int P[100];
		for (int i = 0;i<n;i++){
			cin >> c;
			T.push_back(c); 
		}
		cin >> num;
		sort(T.begin(),T.end());
		int temp = 0;
		do {
			int i = 0;
			bool s = true;
			while (i<num-1){
				if (T[i]>T[i+1]){
					s = false;
				}
				i++;
			}
			if (s == true){
				if(T[num-1]!=temp){
				for (int i=0;i<num;i++){
					cout << T[i] << " ";
				}
				cout << endl;
			}
			}
			temp = T[num-1];
		}while(next_permutation(T.begin(),T.end()));
	}
}
