#include<bits/stdc++.h>
using namespace std;
// ����6.11 ������������ĳ˻�

 
int main() {
	int a[2][3], b[3][2];
	int res[2][2];
	for(int i=0; i<2; i++) {
		for(int j=0; j<3; j++) {
			cin>> a[i][j];
		}
	} 
	for(int i=0; i<3; i++) {
		for(int j=0; j<2; j++) {
			cin>> b[i][j];
		}
	}
	// ��ʼ���������� 
	for(int i=0; i<2; i++) {
		memset(res[i], 0, sizeof(res[i]));
	}
	// ����˻� 
	for(int i=0; i<2; i++) {// x=i,y=j
		for(int j=0; j<2; j++) {
//			cout<<i<< "�У�"<<j<< "��";
			// res[i][j]=(ai0*b0j)+(ai1*b1j)+(ai2*b2j).
			for(int k=0; k<3; k++) {
				res[i][j]+=(a[i][k]*b[k][j]);
			}
			cout<< "(res"<<i<<","<<j<<")="<< res[i][j]<< endl;
		}
	} 
	// ���
	for(int i=0; i<2; i++) {
		for(int j=0; j<2; j++) {
			if(j==1) {
				cout<< res[i][j]<< endl;
			} else {
				cout<< res[i][j]<< " ";
			}
		}
	} 
	return 0;
}


