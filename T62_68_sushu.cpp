#include<bits/stdc++.h>
using namespace std;

bool isSuShu(int x) {
	int r=sqrt(x);
	for(int i=2; i<=r+1; i++) {
		if(x%i==0) {
			return false;
		}
	}
	return true;
}

// ����6.8 ���� 
int main() {
	int n;
	while(cin>> n) {
		vector<int> suShuList;
		vector<int> resList;
		// ��ȡ�������� 
		for(int i=2; i<n; i++) {
			if(isSuShu(i)) {
				suShuList.push_back(i);
			}
		}
		// ����ĩβ1������
		for(int i=0; i<suShuList.size(); i++) {
			if(suShuList[i]%10==1) {
				resList.push_back(suShuList[i]);
			}
		} 
		if(resList.size()==0) {
			cout<< "-1"<< endl;
		} else {
			for(int i=0; i<resList.size(); i++) {
				if(i==resList.size()-1) {
					cout<< resList[i]<< endl;
				}else {
					cout<< resList[i]<< " ";
				}
			}
		}
	} 
	return 0;
} 

