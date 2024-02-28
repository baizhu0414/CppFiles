#include<bits/stdc++.h>
using namespace std;
// 2019 输入为利率，编程实现多少年后利润翻一倍，输出为年

int main() {
	double li;// 利率 
	while(cin>> li) {
		int year=0;
		int x=1;// 本金 
		while(x<2) {
			x= x*(1+li);
			year++;
		}
		cout<< year<< endl;
	}
	return 0;
}

