#include<bits/stdc++.h>
using namespace std;

// 例题6.6 最小公倍数 
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
		temp=-1;// 余数(辗转相除) 
		while(temp!=0) {
			temp=a%b;
			a=b;
			b=temp;
		}
		temp=a;// 最大公约数
//		cout<< temp*(originA/temp)*(originB/temp)<< endl;// 最小公倍数 
		cout<< originA*originB/temp<< endl;// 最小公倍数 
	}
	return 0;
} 

