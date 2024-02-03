#include<bits/stdc++.h>
using namespace std;
// LT7.3 Senior's Gun

#define MAXN 10001
long long gun[MAXN];
long long monster[MAXN];

// true表示不交换顺序（降序排列）
bool compareDown(long long x, long long y) {
	return x>y;
}

int main() {
	int T;// 测试样例数量
	int n, m;// n:枪攻击力数量，m:monster防御力数量
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
		sort(monster, monster+m);// 默认升序
		int answer=0;
		// 每颗子弹攻击当前最小的怪
		for(int i=0; i<n; i++) {
			if(gun[i]>monster[i]) {
				answer+=(gun[i]-monster[i]);
			}
		}
		cout<< answer<< endl;
	}
	return 0;
}

