#include<bits/stdc++.h>
using namespace std;
/*给一个数，若该数的相邻数都不相同，
则称该数为不重复数（如110为重复数，101为不重复数）。
输入n，编程实现比n大的最小不重复数。*/

// 返回true：是不重复数
bool isF(int n) {
	if(n< 10) return true;
	int left= n%10;// 高位
	n/= 10;
	int right= -1;
	while(n!= 0) {
		right= left;
		left= n%10;
		n/= 10;
		if(left== right) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	while(cin>> n) {
		while(1) {
			if(isF(++n)) {
				cout<< n<< endl;
				break;
			}
		}
	}
	return 0;
}
