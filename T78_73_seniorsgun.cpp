#include<bits/stdc++.h>
using namespace std;
// LT7.3 Senior's Gun

#define MAXN 10001
long long gun[MAXN];
long long monster[MAXN];

// true��ʾ������˳�򣨽������У�
bool compareDown(long long x, long long y) {
	return x>y;
}

int main() {
	int T;// ������������
	int n, m;// n:ǹ������������m:monster����������
	cin>> T;
	for(int t=0; t<T; t++) {
		cin>> n>> m;
		for(int i=0; i<n; i++) {
			cin>> gun[i];
		}
		for(int i=0; i<m; i++) {
			cin>> monster[i];
		}
		sort(gun, gun+n, compareDown);
		sort(monster, monster+m);// Ĭ������
		int answer=0;
		// ÿ���ӵ�������ǰ��С�Ĺ�
		for(int i=0; i<n; i++) {
			if(gun[i]>monster[i]) {
				answer+=(gun[i]-monster[i]);
			}
		}
		cout<< answer<< endl;
	}
	return 0;
}

