#include<bits/stdc++.h>
using namespace std;

// ϰ��6.8 ��������(��)
/**
  ���ȱ�������� n �Ľ׳˿϶����У���ô���ǿ��԰� a �����
�����ɸ�������֮����Ȼ���� 2 ~ n �а������ٸ���Ӧ������
�ӣ����ܵó������������� a �Ķ��ٴη���
  ��ʱn!��Ӧa^k�ﵽ�����a^(k+1)���޷������ 
*/

// ��ȡ����������10=2*5 
void getYinShu(int yinshu[], int x) {
	// 2
	for(int i=2; i*i<=x; i++) {
		while(x%i==0&& x>0) {
			yinshu[i]++;
			x=x/i;
		}
	}
	// 5
	if(x>1) {
		yinshu[x]++;
	}
}

int main() {
	int n, a;
	while(cin>> n>> a) {
		int yinshuA[1000], yinshuB[1000];
		memset(yinshuA, 0, sizeof(yinshuA));
		memset(yinshuB, 0, sizeof(yinshuB));
		// �ֱ���a��n!������
		getYinShu(yinshuA, a);
		for(int i=2; i<=n; i++) {
			getYinShu(yinshuB, i);
		}
		int k=1000;
		// ������е���С����������(��n!��3��2��a��1��2����k=3)����Ϊ������֮���޷����
		for(int i=2; i<=a; i++) {
			if(yinshuA[i]!=0) {
				k=min(k, yinshuB[i]/yinshuA[i]);
			}
		} 
		cout<< k<< endl;
	}
	return 0;
}

