#include<bits/stdc++.h>
using namespace std;
// ����6.10 A^B����λ��Ӧ������ 

// a^b�У�bһ�����Ի�Ϊ�����ƣ��� 15=(1111).a^(1+2+4+8) ,a^4=(a^2)*(a^2).
int calculate(int a, int b, int mod) {
	int ans=1;
	while(b>0) {
		if(b%2==1) {// �����Ƶ�λΪ1 
			ans=ans*a;
			ans=ans%mod; 
		}
		a=a*a;
		a=a%mod;
		b=b/2; 
	}
	return ans;
}

int main() {
	int A, B;
	while(cin>> A>> B) {
		if(A==0&& B==0) {
			break;
		}
		cout<< calculate(A, B, 1000)<< endl;
	} 
	return 0;
}
 
