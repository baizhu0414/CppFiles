#include<bits/stdc++.h>
using namespace std;

// true�򲻽���,��������
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

// ����3.5:����+���ֲ���
int main() {
	int n, m;
	int a[200], b[200];// aΪԭ���飬bΪ��Ҫ���ҵ�����
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
