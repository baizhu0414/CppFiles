#include<bits/stdc++.h>
using namespace std; 
//2019 ����������������������λ���������������ڸ�λ���Ĵη�֮��.

int fun(int x) {
	int total=0;
	while(x!=0) {
		int cur=x%10;
		x/=10;
		total+=pow(cur, 4);
	}
	return total;
}

int main() {
	for(int i=1000; i<10000; i++) {
		if(i==fun(i)) {
			cout<< i<< endl;
		}
	}
	return 0;
}

