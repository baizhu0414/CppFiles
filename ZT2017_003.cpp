#include<bits/stdc++.h>
using namespace std;
/*��һ���������ֽ������������磺����90����ӡ����90 = 2 * 3 * 3 * 5��*/

bool isZhishu(int x) {
	for(int i=2; i<=x/2; i++) {
		if(x%i== 0) return false;
	}
	return true;
} 

int main() {
	int n;
	vector<int> zhi;// �洢С��n������ 
	while(cin>> n) {
		zhi.clear();
		for(int i=2; i<=n; i++) {
			if(isZhishu(i)) {
				zhi.push_back(i);
//				cout<< i<< " ";
			}
		}
		vector<int> res;
		while(n!= 1) {
			for(int i=0; i<zhi.size(); i++) {
				if(n%zhi[i]== 0) {
					res.push_back(zhi[i]);
					n/= zhi[i]; 
				}
			}
		}
		sort(res.begin(), res.end());
		for(vector<int>::iterator it=res.begin(); it!= res.end(); ++it) {
			if(it+1== res.end()) {
				cout<< *it<< endl;
			} else {
				cout<< *it<< " * ";
			}
		}
	}
	return 0;
} 
