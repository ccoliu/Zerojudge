#include <bits/stdc++.h>
using namespace std;

void Fibonacci(int start,int num,int c){
	if(start==c){
		cout << num << endl;
		return;
	}
	else {
		if(start==0){
			Fibonacci(start+1,num+1,c);
		}
		else{
			Fibonacci(start+1,num+start,c);
		}
	}
}

int main(){
	int c;
	while (cin>>c){
		Fibonacci(0,0,c);
	}
}
