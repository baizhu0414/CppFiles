#include<bits/stdc++.h>
using namespace std;

bool cmpDown(int a, int b) {
	return a> b;
} 
// 哈夫曼求wpl，此程序超时。
int main() {
	int n;
	vector<int> list;
	while(cin>> n) {
		if(n==0) break;
		list.clear();
		int temp;
		for(int i=0; i<n; i++) {
			cin>> temp;
			list.push_back(temp); 
		}
		sort(list.begin(), list.end(), cmpDown);
		int answer=0;
		while(list.size()> 1) {
			int size= list.size();
			int plus= list[size-1]+ list[size-2];
			answer+= plus;
			list.pop_back();
			list.pop_back();
			list.push_back(plus);
			sort(list.begin(), list.end(), cmpDown);
		}
		cout<< answer<< endl;
	}
	return 0;
}

