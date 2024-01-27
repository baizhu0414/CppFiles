#include<bits/stdc++.h>
using namespace std;
// 放弃此题 
#define MAXN 100
int posSpeed[MAXN][2];//posi,0是位置(1~99)；posi,1是速度(-1,0,1) 

int isFinish(int n) {
	for(int i=0; i<n; i++) {
		if(posSpeed[i][1]==0 || posSpeed[i][0]==0 || posSpeed[i][0]==100) {
			continue; 
		} else {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n;
	while(scanf("%d", &n) != EOF) {
		memset(posSpeed, 0, sizeof(posSpeed));
		for(int i=0; i<n; i++) {
			scanf("%d%d", &posSpeed[i][0], &posSpeed[i][1]);
		}
		
		while(!isFinish(n)) {
			
		}
	}
	return 0;
}
