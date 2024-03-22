#include<bits/stdc++.h>
using namespace std;
// 用递归实现，显示用1分、2分和5分的硬币凑成1元，一共有多少种方法。(541种)
int coin[3]= {1,2,5};// type:0, 1, 2
int f(int n, int type) {
	if(type>2) {// 集中零钱都是用过了 
		if(n== 0) return 1;
		else return 0;
	}
	int count= 0; 
	for(int i=0; i*coin[type]<=n; i++) {
		count+= f(n-i*coin[type], type+1);
	}
	return count;
}

int main() {
	int n= 100;
	cout<< f(n, 0)<< endl;
	return 0;
}
