#include<bits/stdc++.h>
using namespace std;
// 301. 删除无效的括号 https://leetcode.cn/problems/remove-invalid-parentheses/ 

void countMove(string s, int &lmove, int &rmove) {
	int l=0;
	int r=0;
	for(int i=0; i<s.length(); i++) {
		if(s[i]=='(') {
			l++;
		} else if(s[i]==')') {
			r++;
		}
	}
	if(l> r) {
		lmove= l-r;
	} else {
		rmove= r-l;
	}
}

void process(string s, vector<string> &res, int lmove, int rmove) {
	if(lmove==0&& rmove==0) {
		res.push_back(s);
		return;
	}
	if(lmove>0|| rmove>0) {
		for(int i=0; i<s.length(); i++) {
			if(s[i]=='('&& lmove>0) {
				string temp=s.substr(0, i)+s.substr(i+1, s.length());
				process(temp, res, lmove-1, rmove);
			}
			if(s[i]==')'&& rmove>0) {
				string temp=s.substr(0, i)+s.substr(i+1, s.length());
				process(temp, res, lmove, rmove-1);
			}
		}
	}
}

vector<string> removeInvalidParentheses(string s) {
	vector<string> res;
	int lmove, rmove;// 多余括号数
	countMove(s, lmove, rmove);
	if(lmove==0&& rmove==0) {
		res.push_back(s);
		return res;
	}
	process(s, res, lmove, rmove);
	return res;
}

// 判断是否合规 
bool legal(string s) {
	int left=0;
	for(int i=0; i<s.length(); i++) {
		if(s[i]=='(') {
			left++;
		} else if(s[i]==')') {
			if(left> 0) {
				left--;
			} else {
				return false;
			}
		}
	}
	return left==0;
} 

// 删除1.不合规字符串 2.重复字符串 
void removeUnValid(vector<string> &list) {
	vector<string> legalList;
	// 去除不合规字符串
	for(int i=0; i<list.size(); i++) {
		if(legal(list[i])) {
			legalList.push_back(list[i]);
		}
	}
	list.clear();
	// 去重res,结果存到list中 
	for(int i=0; i<legalList.size(); i++) {
		bool exit= false;
		for(int j=0; j<list.size(); j++) {
			if(list[j].compare(legalList[i])==0) {
				exit= true;// 重复 
			}
		}
		if(!exit) {
			list.push_back(legalList[i]);
		}
	}
}

int main() {
	string s;
	while(cin>> s) {
		vector<string> res= removeInvalidParentheses(s);
		removeUnValid(res);
		for(int i=0; i<res.size(); i++) {
			cout<< res[i]<< endl;
		}
	}
	return 0;
}
