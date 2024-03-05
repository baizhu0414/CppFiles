#include<bits/stdc++.h>
using namespace std;
#define MAXN 65
/*2.现在有一串字符串由【（）】组成，请判断其是否括号匹配.如果合法就输出合
法，如果不合法就删除不合法的字符，使其成为合法字符串。*/
// NC26 括号生成 https://www.nowcoder.com/share/jump/7024627721709344252326
// 301. 删除无效的括号 https://leetcode.cn/problems/remove-invalid-parentheses/ 

// 错：题目描述不清晰 
int main() {
	string str;
	while(cin>> str) {
		int len= str.length();
		bool isOk= true;
		vector<char> list;
		string res="";
		// [(()]   [(((])]   [()(()][(()]
		for(int i=0; i<len; i++) {
			if(str[i]=='('|| str[i]=='[') {
				list.push_back(str[i]); 
			} else if(str[i]==')'&& list.size()>0&& list[list.size()-1]=='(') {
				list.pop_back();
				res="("+res+")";
			} else if(str[i]==']'&& list.size()>0&& list[list.size()-1]=='[') {
				list.pop_back();
				res="["+res+"]";
			} else {
				// 不匹配 
				isOk= false;
				if(str[i]==']') {
					res=res+"[]";
				} else if(str[i]==')') {
					res=res+"()";
				}
			}
		}
		while(!list.empty()) {
			if(list[list.size()-1]=='(') {
				res="("+res+")";
			} else if(list[list.size()-1]=='[') {
				res="["+res+"]";
			}
			list.pop_back();
		}
		if(isOk) {
			cout<< "合格"<< endl;
		} else {
			cout<< res<< endl;
		}
	}
	return 0;
} 
