#include<bits/stdc++.h>
using namespace std;

// ������ɸ������������
int main() {
	int n;
	cin>> n;
	vector<int> list(n+1, 1);// ��������Ƿ��Ѿ���ɾ����ɾ����Ϊ0
	vector<int> res;
	list[0]=0;
	list[1]=0; 
	for(int i=2; i<=n; i++) {
		if(list[i]!= 0) {
			res.push_back(i);
		}
		int beishu= 2;
		while(beishu*i<=n) {
			list[beishu*i]= 0;
			beishu++;
		}
	}
	for(int i=0; i<res.size(); i++) {
		cout<< res[i]<< " ";
	}
	cout<< endl;
	return 0;
} 
