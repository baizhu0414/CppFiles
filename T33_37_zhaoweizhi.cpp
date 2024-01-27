#include<bits/stdc++.h>
using namespace std;

struct Node {
	int idx;
	char c; 
}; 

void process(Node a[], int len) {
	vector<vector<Node > > sameList; 
	vector<Node> same;
	same.push_back(a[0]);
	sameList.push_back(same);
	// 将相同的字符串聚到一起
	for(int i=1; i<len; i++) {
		int exit = 0;
		for(int j=0; j<sameList.size(); j++) {
			if(a[i].c==sameList[j][0].c) {
				sameList[j].push_back(a[i]);
				exit=1;
				break;
			}
		}
		if(!exit) {
			vector<Node> temp;
			temp.push_back(a[i]);
			sameList.push_back(temp);
		}
	}
	// 将[[],[],[]]转化为[]
	int idx=0;
	for(int i=0; i<sameList.size(); i++) {
		for(int j=0; j<sameList[i].size(); j++) {
			a[idx++] = sameList[i][j];
		}
	} 
}

void printRepeat(Node a[], int len) {
	vector<Node> same;
		for(int i=0; i<len; i++) {
			if(i!=len-1&& a[i].c == a[i+1].c) {
				same.push_back(a[i]);
			} else if(i>0){
				if(a[i].c == a[i-1].c) {
					same.push_back(a[i]);
				}
				// 输出
				for(int j=0; j<same.size(); j++) {
					if(j!=same.size()-1) {
						cout<< same[j].c<< ":"<< same[j].idx<< ",";
					} else {
						cout<< same[j].c<< ":"<< same[j].idx<< endl;
					}
				} 
				same.clear();
			}
		}
}

int main() {
	Node a[100];
	int len;
	string s;
	while(cin>> s) {
		len = s.length();
		for(int i=0; i<len; i++) {
			a[i].c = s[i];
			a[i].idx = i;
		}
		process(a, len);
		for(int i=0; i<len; i++) {
			cout<< a[i].c;
		} 
		cout<< endl;
		printRepeat(a, len);
	}
	return 0;
}
