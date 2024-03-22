#include<bits/stdc++.h>
using namespace std;
#define MAXN 11 
/*
4、输入一个N（N<=10）阶方阵，按照如下方式调整方阵：
 1、将第一列中最大数所在的行与第一行对调。
 2、将第二列中从第二行到第N行最大数所在的行与第二行对调。
 依此类推...N-1、将第N-1列中从第N-1行到第N行最大数所在的行与第N-1行对调。N、输出这个方阵
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
		
		for(int i=0; i<N; i++) {// 需要交换的行 
			int max= data[i][i];
			int maxL= i; // 最大的数所在行 
			for(int j=i+1; j<N; j++) {// i列中遍历 
				if(max< data[j][i]) {
					max= data[j][i];
					maxL= j;
				}
			}
			if(maxL!= i) {// 需要交换两行i和maxL 
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
