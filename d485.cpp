#include <bits/stdc++.h>
using namespace std;

int main(){
	long long start,end;
	cin >> start >> end;
	cout << ((start%2==0) + (end%2==0) + (end-start))/2 << endl;
}

