#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#pragma comment(linker, "/stack:200000000")
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num;
	scanf("%d",&num);
	int T = 0;
	int pre = 0;
	int n = 1;
	unsigned long long sum = 0;
	unsigned long long height[num] = {};
	for (int i = 0;i < num;++i){
			scanf("%llu",&height[i]);
	}
	while (T<num){
		sum = 0;
		n = 1;
		pre = T;
		while ((pre-n) >= 0){ 
			if (height[pre] > height[pre-n]){
				sum += height[pre-n];
				n++;
			} else break;
		}	//往左看
		n = 1;
		while (pre+n<=num-1){ 
			if (height[pre] > height[pre+n]){
				sum += height[pre+n];
				n++;
			} else break; 
		}	//往右看
		printf("%llu\n",sum);
		T++;
	}
}
