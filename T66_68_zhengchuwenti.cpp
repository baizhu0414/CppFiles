#include<bits/stdc++.h>
using namespace std;

// 习题6.8 整除问题(难)
/**
  首先暴力求出来 n 的阶乘肯定不行，那么我们可以把 a 给拆分
成若干个质因子之积，然后看下 2 ~ n 中包含多少个对应的质因
子，就能得出来最多可以整除 a 的多少次方。
  此时n!对应a^k达到最大，且a^(k+1)就无法相除。 
*/

// 获取所有素因数10=2*5 
void getYinShu(int yinshu[], int x) {
	// 2
	for(int i=2; i*i<=x; i++) {
		while(x%i==0&& x>0) {
			yinshu[i]++;
			x=x/i;
		}
	}
	// 5
	if(x>1) {
		yinshu[x]++;
	}
}

int main() {
	int n, a;
	while(cin>> n>> a) {
		int yinshuA[1000], yinshuB[1000];
		memset(yinshuA, 0, sizeof(yinshuA));
		memset(yinshuB, 0, sizeof(yinshuB));
		// 分别求a和n!的因数
		getYinShu(yinshuA, a);
		for(int i=2; i<=n; i++) {
			getYinShu(yinshuB, i);
		}
		int k=1000;
		// 求出其中的最小倍数的因数(如n!有3个2，a有1个2，则k=3)，因为素因数之间无法相除
		for(int i=2; i<=a; i++) {
			if(yinshuA[i]!=0) {
				k=min(k, yinshuB[i]/yinshuA[i]);
			}
		} 
		cout<< k<< endl;
	}
	return 0;
}

