#include<bits/stdc++.h>
using namespace std;

// true则不交换,降序排列
bool cmpDown(int x, int y) {
	return x>y;
}

// a:5 4 3 2 1;x:6
bool binSearch(int a[], int n, int x) {
	int left=0, right=n-1;
	int mid;
	while(left<=right) {
		mid = (left+right)/2;
		if(a[mid]>x) {
			left = mid+1;
		} else if(a[mid]<x) {
			right = mid-1;
		} else {
			return true;
		}
	}
	return false;
}

// 例题3.5:排序+二分查找
int main() {
	int n, m;
	int a[200], b[200];// a为原数组，b为需要查找的数组
	while(scanf("%d", &n)!=EOF) {
		for(int i=0; i<n; i++) {
			scanf("%d", &a[i]);
		}
		scanf("%d", &m);
		for(int i=0; i<m; i++) {
			scanf("%d", &b[i]);
		}
		sort(a, a+n, cmpDown);
		for(int i=0; i<m; i++) {
			if(binSearch(a, n, b[i])) {
				printf("YES\n");
			} else {
				printf("NO\n");
			}
		}
	}
	return 0;
}
