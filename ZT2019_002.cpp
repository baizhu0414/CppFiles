#include<bits/stdc++.h>
using namespace std;
// 2019 ����Ϊ���ʣ����ʵ�ֶ����������һ�������Ϊ��

int main() {
	double li;// ���� 
	while(cin>> li) {
		int year=0;
		int x=1;// ���� 
		while(x<2) {
			x= x*(1+li);
			year++;
		}
		cout<< year<< endl;
	}
	return 0;
}

