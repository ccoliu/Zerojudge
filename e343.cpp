#include <bits/stdc++.h>
using namespace std;

int main(){
	float height,weight;
	cin >> weight >> height;
	float BMI = weight/pow((height/100),2); 
	cout << fixed << setprecision(1) << BMI << endl; 
}

