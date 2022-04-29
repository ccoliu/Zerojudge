#include <bits/stdc++.h>
using namespace std;

int main(){
	int c;
	while (cin >> c){
		switch(c%3){
			case 0:
				cout << c/3 << endl;
				break;
			case 1:
				cout << ((c-4)/3)+2 << endl;
				break;
			case 2:
				cout << ((c-2)/3)+1 << endl;
				break;
		} 
	} 
}

