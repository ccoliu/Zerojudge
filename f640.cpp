#include <bits/stdc++.h>
using namespace std;

int f(int);
int g(int,int);
int h(int,int,int);

int main(){
	string s;
	vector<string> a;
	stack<int> b;
	getline(cin,s);
	stringstream ss(s);
	string o;
	while (ss >> o){
		a.push_back(o);
	}
	int sz = a.size()-1;
	int ans = 0;
	while(sz >= 0){
		if (a[sz]!="f" && a[sz]!="g" && a[sz]!="h"){
			b.push(atoi(a[sz].c_str()));
		}
		else {
			if (a[sz]=="f"){
				int q = b.top();
				b.pop();
				ans = f(q);
				b.push(ans); 
			}
			else if (a[sz]=="g"){
				int q = b.top();
				b.pop();
				int w = b.top();
				b.pop();
				ans = g(q,w);
				b.push(ans);
			}
			else {
				int q = b.top();
				b.pop();
				int w = b.top();
				b.pop();
				int e = b.top();
				b.pop();
				ans = h(q,w,e);
				b.push(ans);
				}
			}
		sz--;
	}
	cout << b.top() << endl;
}

int f(int p){
	return (2*p)-3;
}

int g(int p1,int p2){
	return 2*p1+p2-7;
}

int h(int p1,int p2,int p3){
	return 3*p1-2*p2+p3;
}
