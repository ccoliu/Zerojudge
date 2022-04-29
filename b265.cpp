#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	while (cin >> n && n){
		unordered_map<string,int> mmap;
		bool uni = false;
		int Max = 0;
		int ans = 0;
		for (int i=0;i<n;i++){
			int x[5];
			int m = 1;
			for (int j=0;j<5;j++){
				cin >> x[j];
			}
			sort(x,x+5);
			string s;
			for (int j=0;j<5;j++){
				s += x[j];
			}
			if (mmap.find(s)==mmap.end()){
				mmap.insert(make_pair(s,1));
			}
			else {
				mmap[s]++;
				uni = true;
			}
		}
		if (uni==false){
			cout << n << endl;
		}
		else {
			for (auto i:mmap){
				Max = max(i.second,Max);
			}
			for (auto i:mmap){
				if (i.second==Max) ans += Max;
			}
			cout << ans << endl;
		}
	}
}

