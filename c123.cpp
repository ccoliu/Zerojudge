#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	while (cin >> N,N){
		while (true){
			vector<int> track;
			bool valid = true;
			for (int i=0;i<N;i++){
				int c;
				cin >> c;
				if (c==0){
					cout << endl;
					break;
				}
				track.push_back(c);
			}
			if (track.empty()==true){
				break;
			}
			int pointer = 1;
			while (!track.empty()){
				int head = track.front();
				//cout << head << endl;
				if (pointer==head){
					track.erase(track.begin());
					pointer++;
				}
				else if (head > pointer){
					int l = head;
					int i = 0;
					while (l>pointer-1&&!track.empty()){
						if (track[i]<=head){
							if (track[i]==l){
								l--;
								//cout << l << endl;
								track.erase(track.begin()+i);
							}
							else {
								//cout << track[i] << endl;
								valid = false;
								break;
							}
						}
						else {
							i++;
						}
						//cout << i << endl;
					}
					if (valid==false){
						break;
					}
					pointer = head+1;
				}
			}
			if (valid==false){
				cout << "No" << endl;
			} else cout << "Yes" << endl;
		}
	}
}

