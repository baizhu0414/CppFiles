#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
/*将十进制ip转换为二进制显示。
如输入128.1.2.128，转换为10000000.00000001.00000010.10000000*/

string trans(int n) {
	string res= "";
	int rest= 0;
	while(n!= 0) {
		res= (char)(n%2+'0')+res;
		n/= 2;
	}
	return res;
}

int main() {
	int ip[4];
	scanf("%d.%d.%d.%d", &ip[0], &ip[1], &ip[2], &ip[3]);
	for(int i=0; i<4; i++) {
		if(i!= 0) cout<< ".";
		cout<< setfill('0')<< setw(8)<< trans(ip[i]);
	}
	cout<< endl;
	return 0;
} 
