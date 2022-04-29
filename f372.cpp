#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int n;

int x[5003];

int dp(int);

int main(){
	memset(x,0,sizeof(int)*5003);
	x[0] = 1;
	while (scanf("%d",&n)!=EOF){
		printf("%d\n",dp(n%5003));
	}
}

int dp(int n){
	if (x[n]!=0){
		return x[n];
	}
	x[n] = (dp(n-1)*3)%10007;
	return x[n];
}
