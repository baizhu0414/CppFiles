#include<bits/stdc++.h>
using namespace std;

#define MAXN 100
int a[MAXN];

int partition(int a[], int l, int r) {
	int pivot = a[l];
	while(l<r) {
		while(l<r&& a[r]>=pivot)r--;
		a[l] = a[r];
		while(l<r&& a[l]<=pivot)l++;
		a[r] = a[l];
	}
	a[l] = pivot;
	return l;
}

void Qsort(int a[], int left, int right) {
	if(left>=right)return;
	int pos = partition(a, left, right);
	Qsort(a, left, pos-1);
	Qsort(a, pos+1, right);
}

int main() {
	memset(a, 0, MAXN);
	int n;
	while(scanf("%d", &n)!=EOF) {
		for(int i=0; i<n; i++) {
			scanf("%d", &a[i]);
		}
		Qsort(a, 0, n-1);
		for(int i=0; i<n; i++) {
			printf("%d ", a[i]);
		}
		printf("\n");
	}
	return 0;
}
