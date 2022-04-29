#include <bits/stdc++.h>
#include <sstream>
#include <string>
using namespace std;

int main(){
	string s;
	while(getline(cin,s)){
		stringstream ss(s); //把string s 整個丟進去 
		int sum = 0;
		string y;
		while (ss >> y){	//切割(string y)把空格的地方都切開來 
			stringstream sy(y);
			int c = 0;
			while (sy >> c){
				stringstream sx;
				sx << c;
				if (y==sx.str()){
					sum += c;
				}
			}
		}
		cout << sum << endl;
	}
} 
