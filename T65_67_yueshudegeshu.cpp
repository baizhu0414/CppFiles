#include<bits/stdc++.h>
using namespace std;
// ϰ��6.7 Լ���ĸ���
/*
������ n����ΪС��sqrt(n)���� i ���������n��
��ض�����һ������sqrt(n)������j��ʹ�� i*j=n.
���count+2 
*/

int countYueShu(int x) {
	// ��ȡԼ������
	int count=0;
	int r=sqrt(x);// 1.����ʱ�� 
	for(int i=1; i<r; i++) {
		if(x%i==0) {
			count+=2;//2.���1ʹ��i<round<j
		}
	}
	if(r*r==x) count++;
	return count;
}

int main() {
	int N;
	while(cin>> N) {
		vector<int> list;
		vector<int> res;
		int temp;
		for(int i=0; i<N; i++) {
			cin>> temp;
			list.push_back(temp);
		}
		for(int i=0; i<N; i++) {
			res.push_back(countYueShu(list[i]));
		}
		// ���
		for(int i=0; i<N; i++) {
			cout<< res[i]<< endl;
		}
	}
	return 0;
}
