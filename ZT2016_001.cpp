#include<bits/stdc++.h>
using namespace std;
/*�κ�һ������������д�ɼ���������˵���ʽ��
���д����ֽ�������.*/

bool isZhishu(int x) {
	for(int i=2; i<=x/2; i++) {
		if(x%i== 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	while(cin>> n) {
		vector<int> res;
		for(int i=2; i<=n;) {
			if(n%i==0 && isZhishu(i)) {
				cout<< i<< " ";
				res.push_back(i);
				n/= i;
				i= 2;
			} else {
				i++;
			}
		} 
		cout<< endl;
		for(int i=0; i<res.size(); i++) {
			if(i< res.size()-1) {
				cout<< res[i]<< " * ";
			} else {
				cout<< res[i]<< endl;
			}
		}
	}
	return 0;
}
