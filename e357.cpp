#include <bits/stdc++.h>
using namespace std;


int test(int c){
	if (c==1){
		return 1;
	}
	else if (c%2==0){
		test(c/2);
	}
	else{
		return test(c-1) + test(c+1);
	}
}

int main(){
	int c;
	cin >> c;
	cout << test(c) << endl;
}

