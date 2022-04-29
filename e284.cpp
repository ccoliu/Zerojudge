#include <bits/stdc++.h>
using namespace std;

char ch;
char ch2;
unsigned i;
unsigned j;
unsigned sum;
char ch1;
string s;

int main(){
	while(true){
		sum = 0;
		s = "";
		while((ch = getchar_unlocked()) && ch!='\n' && ch!=' ' && ch!=EOF){
			i = i*10 + ch - '0';
		}
		while((ch2 = getchar_unlocked()) && ch2!='\n' && ch2!=' ' && ch2!=EOF){
			j = j*10 + ch2 - '0';
		}
		if (ch == EOF || ch2 == EOF){
			break;
		}
		sum = i + j;
		while(sum!=0){
			ch1 = (sum%10) + '0';
			s = ch1 + s;
			sum /= 10;
		}
		for(int i=0;i<s.length();i++){
			putchar_unlocked(s[i]);
		}
	}
}

