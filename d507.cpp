#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> tri;
	for (int i=0;i<3;i++){
		int j;
		cin >> j;
		tri.push_back(j);
	}
	sort(tri.begin(),tri.end());
	if (sqrt(pow(tri[1],2)+pow(tri[0],2))<tri[2]){
		cout << "obtuse triangle" << endl;
	}
	else if (sqrt(pow(tri[1],2)+pow(tri[0],2))==tri[2]){
		cout << "right triangle" << endl;
	}
	else {
		cout << "acute triangle" << endl;
	}
}

