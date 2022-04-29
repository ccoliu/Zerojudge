#include <bits/stdc++.h>
using namespace std;

int main(){
	map<int,int> map1;
	map<int,int> map2;
	int a,b;
	while(scanf("%d:%d",&a,&b),a,b){
		map1.insert(make_pair(a,b));
	}
	while(scanf("%d:%d",&a,&b),a,b){
		map2.insert(make_pair(a,b));
	}
	map<int,int>::iterator it1;
	int acc = 0;
	for (it1=map1.begin();it1!=map1.end();it1++){
	map<int,int>::iterator it2 = map2.find(it1->first);
		if (it2 != map2.end()){
		acc += it1->second * it2->second;
		}
	}
	cout << acc << endl;
}

