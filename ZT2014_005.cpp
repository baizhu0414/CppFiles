#include<bits/stdc++.h>
using namespace std;
// �õݹ�ʵ�֣���ʾ��1�֡�2�ֺ�5�ֵ�Ӳ�Ҵճ�1Ԫ��һ���ж����ַ�����(541��)
int coin[3]= {1,2,5};// type:0, 1, 2
int f(int n, int type) {
	if(type>2) {// ������Ǯ�����ù��� 
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
