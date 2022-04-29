#include <stdio.h>
#include <stdlib.h>

int input;
char s[30] = {};
int max;

void recursive(int left,int right,int total){
	if (left>input||right>left){
		return;
	}
	if (total==max){
		printf("%s\n",s);
		return;
	}
	s[total] = '(',recursive(left+1,right,total+1);
	s[total] = ')',recursive(left,right+1,total+1);
}

int main(){
	while(scanf("%d",&input)!=EOF){
		max = input*2;
		recursive(0,0,0);
	}
} 
