#include <bits/stdc++.h>
using namespace std;
void visit(int,int);
char maze[101][101];
int used[101][101];

int startx = 1, starty = 1;
int ans = 0;
int c;
int endx = 0, endy = 0;
int success = 0;

int main(){
	cin >> c;
	endx = c-2, endy = c-2;
	for (int i=0;i<c;i++){
		for (int j=0;j<c;j++){
			cin >> maze[i][j];
		}
	}
	visit(startx,starty);
	if (success == 0){
		cout << "No solution!" << endl;
	}
}

int t = 0;
void visit(int i,int j){
	ans++;
	maze[i][j] = ' ';
	if (i == endx && j == endy){
		success = 1;
		cout << ans << endl;
		return;
	}
	else {
		if (maze[i][j+1]=='.') visit(i,j+1);
		if (maze[i+1][j]=='.') visit(i+1,j);
		if (maze[i][j-1]=='.') visit(i,j-1);
		if (maze[i-1][j]=='.') visit(i-1,j);
	}
	maze[i][j] = '.';
	ans--;
	return;
}

