#include<bits/stdc++.h>
using namespace std;
/*��һ��������������������������ͬ��
��Ƹ���Ϊ���ظ�������110Ϊ�ظ�����101Ϊ���ظ�������
����n�����ʵ�ֱ�n�����С���ظ�����*/

// ����true���ǲ��ظ���
bool isF(int n) {
	if(n< 10) return true;
	int left= n%10;// ��λ
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
