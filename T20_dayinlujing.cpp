#include<bits/stdc++.h>
using namespace std;
// 较难，已学会默写。
/*
  1.☆使用vector<string>的'数组'来存储路径'vector<string>[]':[{"a", "b", "cst"}, {"a", "c"}].
  2.输出时统计两个vector<string>相同字串个数
  3.分割字符串两种，'a\b\c'和'a\' 
*/ 
#define maxn 10
vector<string> vecStrs[maxn];// 把路径string转为vector<string>

// 字符串数组升序排列。 
void sortUp(string strs[], int n) {
	string temp;
	for(int i=0; i<n; i++) {
		for(int j=i; j<n; j++) {
			if(strs[i].compare(strs[j])>0) {// strs[i]>strs[j]则交换
				temp = strs[i];
				strs[i] = strs[j];
				strs[j] = temp;
			}
		}
	}
}

int main() {
	string strs[maxn];
	int n;
	while(cin>>n) {
		memset(vecStrs, 0, sizeof(vecStrs));
		if(n==0)return 0;
		for(int i=0; i<n; i++) {
			cin>> strs[i];
		}
		sortUp(strs, n);
		
		// 分割字符串数组为vector<string>数组
		for(int i=0; i<n; i++) {
			string curS = strs[i];
			string temp;
			for(int j=0; j<curS.length(); j++) {
				if(curS[j] != '\\') {
					temp+=curS[j];
				} else if(temp.length()>0){// 'd\'形式 
					// vecStrs[i]:类型是vector<string>
					vecStrs[i].push_back(temp);
					temp=""; 
				}
				// 'a\b'最后一个字符串处理 
				if(j == curS.length()-1 && temp.length()>0) {
					vecStrs[i].push_back(temp);
					temp=""; 
				}
			} 
		} 
		
		// 输出第一个路径 
		for(int i=0; i<vecStrs[0].size(); i++) {
			for(int j=0; j<i; j++) cout<< "  ";
			cout<< vecStrs[0][i]<< endl;
		} 
		for(int i=1; i<n; i++) {
			int same = 0;
			// 找到相同字符串数量 
			while(same<vecStrs[i].size()
				&& same<vecStrs[i-1].size()
				&& vecStrs[i][same] == vecStrs[i-1][same]) {
					same++;
			}
			// 输出第i个路径 
			for(int j=same; j<vecStrs[i].size(); j++) {
				for(int k=0; k<j; k++) cout<< "  ";
				cout<< vecStrs[i][j]<< endl;
			}
		}
	}
	return 0;
}
