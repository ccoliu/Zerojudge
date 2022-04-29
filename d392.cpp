#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main(){
	string s;
	while(getline(cin,s)){
	stringstream ss(s);
	int c = 0;
	unsigned long sum = 0;
	while(ss>>c){
		sum += c;		
	}
	cout << sum << endl;
}
}
