#include<bits/stdc++.h>
using namespace std;
/*��m��ͬ����ƻ������n��ͬ���������
�����е����ӿ��Ų��ţ��ʹ��ж����ֲ�ͬ�ķַ���
��5��1��1��1��5��1 ��ͬһ�ַַ���*/
// https://zhuanlan.zhihu.com/p/656786396
int getcount(int apple, int plant) {
    if (apple == 0 || plant == 1) {
        return 1;
    }
    if (plant > apple) {
        return getcount(apple, apple);
    } else {
        return getcount(apple, plant - 1) + getcount(apple - plant, plant);
    }
}

int main() {
	int m, n;// m:ƻ����n:����
	while(cin>> m>> n) {
		// n>m:mƻ���ŵ�m���ӣ�ʣ��n-m�������Ӳ��ùܣ� 
		// n<=m:1)һ�������ӣ�mƻ���ŵ�n-1���ӣ�2)û�п����ӣ�m-nƻ���ŵ�n�����С� 
		cout<< getcount(m, n)<< endl;
	} 
	return 0;
}
