#include<bits/stdc++.h>
using namespace std;

bool isSuShu(int x) {
	int rou=sqrt(x);
	for(int i=2; i<rou+1; i++) {
		if(x%i==0) {
			return false;
		}
	}
	return true;
}

// ����6.9 �������ĸ��� 
int main() {
	int N;
	while(cin>> N) {
		vector<int> suShuList;
		int count=0;
		// ����ܵ����� 
		int round=sqrt(N);
		for(int i=2; i<round+1; i++) {
			if(isSuShu(i)) {
				suShuList.push_back(i); 
//				cout<< i<< " ";
			}
		}
		// ͳ������ 
		for(int i=0; i<suShuList.size();) {
			if(N%suShuList[i]==0) {
				N=N/suShuList[i];
				count++;
				i=0;
			} else {
				i++;
			}
		}
		if(N!=1) {
			count++;
		}
		cout<< count<< endl;
	} 
	return 0;
}

