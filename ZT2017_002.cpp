#include<bits/stdc++.h>
using namespace std;
/*һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӡ�
С���ӳ�����3���º�ÿ��������һ�����ӡ��������Ӷ�������
���ʵ�1���³�����һ�����ӣ���n�����ж���ֻ���ӣ�*/ 
// ģ��֮����Թ۲쵽����Feibolaci���� 
int feibo(int n){
    if(n == 1 || n == 2){
        return 2;
    }else{
        return feibo(n - 1) + feibo(n - 2);
    }
}

int main() {
	int n;
	int count=1;
	while(cin>> n) {
		cout << "��" << n << "������" << feibo(n) << "ֻ����" << endl;
	}
	return 0;
}
