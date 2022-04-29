#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	ios::sync_with_stdio(0);
	cin.tie(0);
	while(scanf("%d",&n) && n){
		vector<int> T;
		int c;
		int num = 6;
		int P[100];
		for (int i = 0;i<n;i++){
			scanf("%d",&c);
			T.push_back(c); 
		}
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
					printf("%d ",T[i]);
				}
				printf("\n");
			}
			}
			temp = T[num-1];
		}while(next_permutation(T.begin(),T.end()));
		printf("\n");
	}
}
