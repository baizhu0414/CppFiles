#include<bits/stdc++.h>
using namespace std;
/*��������2��3��5���������������8������ӡ��ʾ������ϡ�*/
int main() {
	for(int i=0; i<=2; i++) {
		for(int j=0; j<=3; j++) {
			for(int k=0; k<=5; k++) {
				if(i+j+k== 8) {
					cout<< "�죺"<< i<< " �̣�"<< j<< " �ƣ�"<< k<< endl;
				}
			}
		}
	}
	return 0;
} 
