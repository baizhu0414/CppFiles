#include<bits/stdc++.h>
using namespace std;
/*��Ϊ151����һ����������һ���������������Һʹ��ҵ�����һ���ģ���
����151�ǻ���������
дһ���������ҳ���Χ[a, b]������л�������������a��b�ɼ������롣*/

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
