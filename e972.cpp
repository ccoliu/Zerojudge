#include <bits/stdc++.h>
using namespace std;

int main(){
	double bud;
	cin >> bud;
	double tar;
	char tarc;
	cin >> tar >> tarc;
	double new_bud = 0;
	switch (tarc){
		case 'U':
			new_bud = bud/30.9;
			if (new_bud>=tar){
				if (new_bud-tar>=0.05){
				cout << fixed << setprecision(2) << tarc << " " << new_bud-tar << endl;
				}
				else{
				cout << fixed << setprecision(2) << tarc << " " << 0.00 << endl;
				}
			}
			else {
				cout << "No Money" << endl;
			}
			break;
		case 'J':
			new_bud = bud/0.28;
			if (new_bud>=tar){
				if (new_bud-tar>=0.05){
				cout << fixed << setprecision(2) << tarc << " " << new_bud-tar << endl;
				}
				else{
				cout << fixed << setprecision(2) << tarc << " " << 0.00 << endl;
				}
			}
			else {
				cout << "No Money" << endl;
			}
			break;
		case 'E':
			new_bud = bud/34.5;
			if (new_bud>=tar){
				if (new_bud-tar>=0.05){
				cout << fixed << setprecision(2) << tarc << " " << new_bud-tar << endl;
				}
				else{
				cout << fixed << setprecision(2) << tarc << " " << 0.00 << endl;
				}
			}
			else {
				cout << "No Money" << endl;
			}
			break;
		case 'T':
			new_bud = bud;
			if (new_bud>=tar){
				if (new_bud-tar>=0.05){
				cout << fixed << setprecision(2) << tarc << " " << new_bud-tar << endl;
				}
				else{
				cout << fixed << setprecision(2) << tarc << " " << 0.00 << endl;
				}
			}
			else {
				cout << "No Money" << endl;
			}
	}
}

