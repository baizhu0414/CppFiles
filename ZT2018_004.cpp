#include<bits/stdc++.h>
using namespace std;
#define MAXN 11 
/*
4������һ��N��N<=10���׷��󣬰������·�ʽ��������
 1������һ������������ڵ������һ�жԵ���
 2�����ڶ����дӵڶ��е���N����������ڵ�����ڶ��жԵ���
 ��������...N-1������N-1���дӵ�N-1�е���N����������ڵ������N-1�жԵ���N������������
*/

int main() {
	int N;
	int data[MAXN][MAXN];
	while(cin>> N) {
		for(int i=0; i<N; i++) {
			for(int j=0; j<N; j++) {
				cin>> data[i][j];
			}
		}
		
		for(int i=0; i<N; i++) {// ��Ҫ�������� 
			int max= data[i][i];
			int maxL= i; // ������������ 
			for(int j=i+1; j<N; j++) {// i���б��� 
				if(max< data[j][i]) {
					max= data[j][i];
					maxL= j;
				}
			}
			if(maxL!= i) {// ��Ҫ��������i��maxL 
				int temp;
				for(int k=0; k<N; k++) {
					temp= data[i][k];
					data[i][k]= data[maxL][k];
					data[maxL][k]= temp;
				} 
			} 
		}
		for(int i=0; i<N; i++) {
			for(int j=0; j<N; j++) {
				cout<< data[i][j]<< " ";
			}
			cout<< endl;
		}
	}
	return 0;
}
