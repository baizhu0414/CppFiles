#include<bits/stdc++.h>
using namespace std;
/*��д������ʾ2-1000֮���������������ν������ָ�������ĸ�����֮�����õ��ڸ�������*/

bool isWan(int x) {
	int total= 0;
	for(int i=1; i<x; i++) {
		if(x%i== 0) {
			total+= i;
		}
	}
	return total== x;
}

int main() {
	for(int i=2; i<=1000; i++) {
		if(isWan(i)) {
			cout<< i<< " ";
		}
	}
	cout<< endl;
	return 0;
}
