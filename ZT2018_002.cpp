#include<bits/stdc++.h>
using namespace std;
/*2������һ������n��0<n<10������ʾn�����¹���ͼ�Ρ�
����3 ����ʾ��
1
2 3
4 5 6*/
int main() {
	int n;
	while(cin>> n) {
		int num= 1;
		for(int i=1; i<=n; i++) {
			for(int j=1; j<=i; j++) {
				cout<< num++<< " ";
			}
			cout<< endl;
		}
	}
	return 0;
}
