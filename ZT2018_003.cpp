#include<bits/stdc++.h>
using namespace std;
/*因为151既是一个质数又是一个回文数（从左到右和从右到左看是一样的），
所以151是回文质数。
写一个程序来找出范围[a, b]间的所有回文质数，其中a、b由键盘输入。*/

bool isHuiwen(int x) {
	int h= 0;
	int temp= x;
	while(temp!=0) {
		h= h*10+temp%10;
		temp/= 10;
	}
	return x== h;
}

bool isZhishu(int x) {
	if(x<= 1) return false;
	for(int i=2; i<=x/2; i++) {
		if(x%i== 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int a, b;
	while(cin>> a>> b) {
		for(int i=a; i<=b; i++) {
			if(isHuiwen(i)&& isZhishu(i)) {
				cout<< i<< " ";
			}
		}
		cout<< endl;
	}
	return 0;
}
