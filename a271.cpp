#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main(){
	int num;
	cin >> num;
	int T = 0;
	while(T<num){
		int x,y,z,w,n,m;
		string s;
		cin >> x >> y >> z >> w >> n >> m;
		getline(cin,s);
		getline(cin,s);
		if (s.length()==0){
			goto here;
		}
		else {
			stringstream ss(s);
			int c,poison = 0;
			while(ss>>c){
				m -= poison*n;
				if (m<=0){
					break;
				}
				if(c==1){
					m += x;
				}
				else if (c==2){
					m += y;
				}
				else if (c==3){
					m -= z;
				}
				else if (c==4){
					m -= w;
					poison++;
				}
			}
		}
		if (m<=0){
			cout << "bye~Rabbit" << endl;
		}
		else {
		here:	cout << m << endl;
		}
		T++;
	}
} 
