#include<bits/stdc++.h>
using namespace std;
// 习题3.1
#define MAXN 1000
int a[MAXN];

int getMaxLoc(int n) {
	int loc = 0;
	for(int i=1; i<n; i++) {
		if(a[loc]<a[i]) {
			loc = i;
		}
	}
	return loc;
}

// 顺手n--
void removeMax(int maxLoc, int &n) {
	if(maxLoc>=n) return;
	for(int i=maxLoc+1; i<n; i++) {
		a[i-1] = a[i];
	}
	n--;
}

int partition(int l, int r) {
	int pivot = a[l];
	while(l<r) {
		while(l<r&& a[r]>=pivot) r--;
		a[l] = a[r];
		while(l<r&& a[l]<=pivot) l++;
		a[r] = a[l];
	}
	a[l] = pivot;
	return l;
}

void Qsort(int l, int r) {
	if(l>r) return;
	int pos = partition(l, r);
	Qsort(l, pos-1);
	Qsort(pos+1, r);
}

int main() {
	int n;
	while(scanf("%d", &n)!=EOF) {
		memset(a, 0, sizeof(a));
		for(int i=0; i<n; i++) {
			scanf("%d", &a[i]);
		}
		// 获取最大值（无用步骤） 
//		int maxLoc = getMaxLoc(n);
//		printf("%d\n", a[maxLoc]);
//		removeMax(maxLoc, n);
		// 排序
		Qsort(0, n-1);

		if(n==1) {
			printf("%d\n-1", a[0]);
		} else {
			printf("%d\n", a[n-1]);
			for(int i=0; i<n-1; i++) {
				if(i==n-2) {
					printf("%d\n", a[i]);
				} else {
					printf("%d ", a[i]);
				}
			}
		}
	}
	return 0;
}
