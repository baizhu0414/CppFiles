#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int a[200];
	while(scanf("%d", &n)!=EOF) {
		for(int i=0; i<n; i++) {
			scanf("%d", &a[i]);
		}
		int x;
		scanf("%d", &x);
		for(int i=0; i<n; i++) {
			if(a[i] == x) {
				printf("%d\n", i);
				break;
			} else if(i==n-1) {
				printf("-1\n");
			}
		}
	}
	return 0;
}
