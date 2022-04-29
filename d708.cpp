#include <stdio.h>
using namespace std;

int main(){
	int c;
	scanf("%d",&c);
	long long x = 0;
	long long y = 0;
	long long ans = 0;
	for (int i=0;i<c;i++){
		scanf("%d",&x);
		if (i==0){
		ans = x;
		} else {
		ans = ans ^ x ^ 1;
		}
		printf("%d\n",ans);
	}
}

