#include <bits/stdc++.h>
using namespace std;

int main(){
	string s,ss;
	cin >> s >> ss;
	int j = 0;
	int acc1 = 0;
	int acc2 = 0;
	for (int i=s.length()-1;i>=0;i--){
		int temp = s[i]-'A'+1;
	//	cout << temp << endl;
		for (int p=0;p<j;p++){
			temp *= 26;
		}
		acc1 += temp;
		j++;
	}
	j = 0;
	for (int i=ss.length()-1;i>=0;i--){
		int temp = ss[i]-'A'+1;
//		cout << temp << endl;
		for (int p=0;p<j;p++){
			temp *= 26;
		}
		acc2 += temp;
		j++;
	}
//	cout << acc2 << " " << acc1 << endl;
	cout << acc2-acc1+1 << endl;
}

