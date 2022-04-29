#include <bits/stdc++.h>
using namespace std;

int main(){
	int floor;
	cin >> floor;
	int down = 1;
	int a = 1;
	int start = 0;
	while (start<floor-1){
		down += 2;
		start++;
	}
	for (int i =1;i<=floor;i++){
		int j = 1;
		int left_gap = i-1;
		int right_gap = i-1;
		int mid = down/2+1;
		while(j<=down){
			if (j>=(mid-left_gap)&&j<=(mid+right_gap)){
				cout << "*";
			}
			else {
				cout << "_";
			}
			j++;
		}
		cout << endl;
	}
}
