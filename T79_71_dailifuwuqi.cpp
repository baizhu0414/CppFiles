#include<iostream>
#include<string.h>
using namespace std;
// XT7.1 代理服务器
// tip:贪心---每次寻找访问最多ip的proxy地址。
int process(string proxy[], int n, string ips[], int m) {
	int count=0;
	// i++在此处会导致多跳一个ip，在操作i的情况下，考虑while循环，避免此错误。
	for(int i=0; i<m; ) { 
		int curMax=0;
		for(int j=0; j<n; j++) { // 遍历proxy找到当前可以访问最多ip的proxy。
			int k=i;
			while(k<m&& proxy[j]!=ips[k]) { // k：ip地址 
				k++;
			}
			if(curMax<k-i) curMax=k-i;
		}
		if(curMax==0) { // 哪一次无法往后访问了，则失败。如：只有一个proxy切在ip中发生重复。
			return -1;
		}
		i+=curMax;
		count++;
	}
	return count-1;// 第一次不算切换，因此选中8次，其实切换了7次。 
}

int main() {
	string proxy[1001];
	string ips[5001];
	int n, m;//n代理服务器个数, m-IP地址
	while(scanf("%d", &n)!=EOF) {
		for(int i=0; i<n; i++) {
			cin>>proxy[i];
		}
		scanf("%d", &m);
		for(int i=0; i<m; i++) {
			cin>>ips[i];
		}//数据输入
		printf("%d", process(proxy, n, ips, m));
	}
	return 0;
}

