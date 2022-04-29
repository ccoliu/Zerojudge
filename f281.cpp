#include <bits/stdc++.h>
using namespace std;

int main(){
	int num,l;
	cin >> num;
	vector<int> student;
	for (int i=0;i<num;i++){
		int sat;
		cin >> sat;
		student.push_back(sat);
	}
	cin >> l;
	sort(student.begin(),student.end());
	int need = l-student[0];
	if (student[1]-need>=l){
		cout << need << endl;
	}
	else {
		cout << "You are too black!" << endl;
	}
}

