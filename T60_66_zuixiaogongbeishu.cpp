#include<bits/stdc++.h>
using namespace std;

// ����6.6 ��С������ 
int main() {
	int a, b;
	while(cin>> a>> b) {
		int temp;
		int originA=a, originB=b;
		if(a<b) {
			temp=a;
			a=b;
			b=temp;
		}
		temp=-1;// ����(շת���) 
		while(temp!=0) {
			temp=a%b;
			a=b;
			b=temp;
		}
		temp=a;// ���Լ��
//		cout<< temp*(originA/temp)*(originB/temp)<< endl;// ��С������ 
		cout<< originA*originB/temp<< endl;// ��С������ 
	}
	return 0;
} 

