#include<bits/stdc++.h>
using namespace std;

int main() {
	char str[81];
	char pic[30][30];
	int len;
	while(scanf("%s",&str)!=EOF) {
		len = 0;
		while(str[len] !='\0') {
			len++;
		}
		for(int i=0; i<30; i++) {
			for(int j=0; j<30; j++) {
				pic[i][j] = ' ';
			}
		}
		int n1 = (len+2)/3;
		int n2 = n1;
		int n3 = len - 2*n1;//����һ���м䲿���ַ��� **�ѵ� 
		printf("%d %d %d\n", n1, n3, n2);
		// ����
		for(int i=0; i<n1; i++) {
			pic[i][0] = str[i];
		}
		// �� 
		for(int i=0; i<n3; i++) {
			pic[n1-1][i+1] = str[n1 + i];
		}
		// ���� 
		for(int i=0; i<n2; i++) {
			pic[n1-1-i][n3+1] = str[n1 + n3 + i];
		}
		// ���n1�У�n3+2�� 
		for(int i=0; i<n1; i++) {
			for(int j=0; j<n3+2; j++) {
				printf("%c", pic[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}
