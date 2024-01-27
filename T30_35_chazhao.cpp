#include<bits/stdc++.h>
using namespace std;

// ÀıÌâ3.5:±©Á¦ 
int main() {
	int n, m;
	int a[200], b[200];
	while(scanf("%d", &n)!=EOF) {
		for(int i=0; i<n; i++) {
			scanf("%d", &a[i]);
		}
		scanf("%d", &m);
		for(int i=0; i<m; i++) {
			scanf("%d", &b[i]);
		}
		for(int i=0; i<m; i++) {
			for(int j=0; j<n; j++) {
				if(b[i]==a[j]) {
					printf("YES\n");
					break;
				} else if(j==n-1) {
					printf("NO\n");
				}
			}
		}
	}
	return 0;
}
