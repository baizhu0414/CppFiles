#include<bits/stdc++.h>
using namespace std;
/*编写程序，输入x、y的值，按如下公式计算并显示z的值（小数点保留两位显示z）。*/
#define PI 3.1416
double f(int x, int y) {
	if(y> 0) {
		// 一二象限
		return sqrt(abs(x))/(5+2*y); 
	} else if(x< 0&& y< 0) {
		return sin(35*PI/180)- 6*x+ y* y;
	} else {
		return pow(y, x)- 2;
	}
}

int main() {
	double x, y;
	while(cin>> x>> y) {
		cout<< f(x, y)<< endl;
	}
	return 0;
}
