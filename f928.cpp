#include <bits/stdc++.h>
using namespace std;

vector<int> bomb;
void explode(int,int);
int num;

int main(){
	cin >> num;
	bomb.resize(1000);
	for (int i=0;i<num;i++){
		int bomb_type;
		cin >> bomb_type;
		bomb[i] = bomb_type;
	}
	int location;
	cin >> location;
	explode(location,bomb[location]);
	for (int i=0;i<num-1;i++){
		cout << bomb[i] << " ";
	}
	cout << bomb[num-1] << endl;
}

void explode(int pos,int type){
	bomb[pos] = 0;
	if (type==2){
		if (pos-1 >= 0 and bomb[pos-1]!=0){
		explode(pos-1,bomb[pos-1]);
		}
		if (pos+1 <= num-1 and bomb[pos+1]!=0){
		explode(pos+1,bomb[pos+1]);
		}
	}
	else if (type!=1 and type!=0){
		if (pos-2*type >= 0){
			explode(pos-2*type,bomb[pos-2*type]);
			explode(pos-type,bomb[pos-type]);
		}
		else if (pos-type >= 0){
			explode(pos-type,bomb[pos-type]);
		}
		if (pos+2*type <= num-1){
			explode(pos+2*type,bomb[pos+2*type]);
			explode(pos+type,bomb[pos+type]);
		}
		else if (pos+type <= num-1){
			explode(pos+type,bomb[pos+type]);
		}
	}
	return;
}
