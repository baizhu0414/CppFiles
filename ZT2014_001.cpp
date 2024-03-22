#include<bits/stdc++.h>
using namespace std;
/* 编写程序可计算如下分段函数*/
#define PI 3.1416
double f(int x) {
	if(x> 0) {
		return (sqrt(x)+exp(x))/(5*x+ 5);
	} else {
		return (2.0/3+ sin(60*PI/180))*abs(x);
	}
}

int main() {
	int x;
	while(cin>> x) {
		cout<< f(x)<< endl;
	}
	return 0;
}
