#include <bits/stdc++.h>
using namespace std;

int main(){
	int c;
	cin >> c;
	int T=0;
	while (T<c){
		int n;
		cin >> n;
		vector<int> box;
		for (int i=0;i<n;i++){
			int num;
			cin >> num;
			box.push_back(num);
		}
		int pair = 0;
		int head = 0;
		while (pair!=n/2){
			bool find = 0;
			int del = 0;
			for (int i=head;i<box.size();i++){
				if (box[head]!=box[i]){
					find = 1;
					del = i;
					break;
				}
			}
			if (find==0){
				break;
			}
			else {
				box.erase(box.begin()+del);
				pair++;
				head++;
			}
		}
		if (pair==n/2){
			cout << "Yes" << endl;
		} else cout << "No" << endl;
		T++;
	}
}

