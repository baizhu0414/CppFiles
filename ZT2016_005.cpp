#include<bits/stdc++.h>
using namespace std;
/*��д��������x��y��ֵ�������¹�ʽ���㲢��ʾz��ֵ��С���㱣����λ��ʾz����*/
#define PI 3.1416
double f(int x, int y) {
	if(y> 0) {
		// һ������
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
