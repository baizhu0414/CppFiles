#include<bits/stdc++.h>
using namespace std;
/*3.�� n �������ų�һ�ţ��������������������к͡�Ҫ��ʹ�÷��η������*/

// �����η��� 
// �����������в���ֵ����������λ�����ڼ��ɣ��������� 
int main() {
	int n;
	vector<int> list;
	vector<int> dp;
	while(cin>> n) {
		list.push_back(0);
		dp.push_back(0);
		int temp;
		for(int i=0; i<n; i++) {
			cin>> temp;
			list.push_back(temp);
		}
		int res= list[1];
		dp[1]= list[1];
		for(int i=2; i<=n; i++) {
			dp[i]= max(list[i]+ dp[i-1], list[i]);
			res= max(res, dp[i]);
		}
		cout<< res<< endl;
//		for(int i=1; i<=n; i++) {
//			cout<< dp[i]<< " ";
//		}
	}
	return 0;
}
