#include<bits/stdc++.h>
using namespace std;

int main() {
	int L, M;
	int start[101], end[101];
	int place[10001];
	while(scanf("%d%d", &L, &M) != EOF) {
		int count = L+1;
		for(int i=0; i<=L; i++) {
			place[i] = 1;
		}
		for(int i=0; i<M; i++) {
			scanf("%d%d", &start[i], &end[i]);
			for(int j=start[i]; j<=end[i]; j++) {
				if(place[j] == 1) {
					place[j] = 0;
					count--;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}
