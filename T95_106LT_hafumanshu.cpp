#include<bits/stdc++.h>
using namespace std;

bool cmpDown(int a, int b) {
	return a>b;
}

int main() {
	// ����С��Ȩ·������
	int n;
	vector<int> yejiedian;
	while(cin>> n) {
		int temp;
		yejiedian.clear();
		for(int i=0; i<n; i++) {
			cin>> temp;
			yejiedian.push_back(temp);
		}
		sort(yejiedian.begin(), yejiedian.end(), cmpDown);
		int answer=0;
		// ��һά����ģ�����������wpl 
		while(yejiedian.size()>1) {
			int size= yejiedian.size();
			int plus=yejiedian[size-1]+yejiedian[size-2];
			answer+= plus;
			yejiedian.pop_back();
			yejiedian.pop_back();
			yejiedian.push_back(plus);
			sort(yejiedian.begin(), yejiedian.end(), cmpDown);
		} 
		cout<< answer<< endl;
	} 
	return 0;
} 

