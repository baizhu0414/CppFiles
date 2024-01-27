#include<bits/stdc++.h>
using namespace std;
// 例题6.10 A^B后三位对应的数字 

// a^b中，b一定可以化为二进制，如 15=(1111).a^(1+2+4+8) ,a^4=(a^2)*(a^2).
int calculate(int a, int b, int mod) {
	int ans=1;
	while(b>0) {
		if(b%2==1) {// 二进制低位为1 
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
 
