#include<bits/stdc++.h>
using namespace std;
#define MAXN 65
/*2.������һ���ַ����ɡ���������ɣ����ж����Ƿ�����ƥ��.����Ϸ��������
����������Ϸ���ɾ�����Ϸ����ַ���ʹ���Ϊ�Ϸ��ַ�����*/
// NC26 �������� https://www.nowcoder.com/share/jump/7024627721709344252326
// 301. ɾ����Ч������ https://leetcode.cn/problems/remove-invalid-parentheses/ 

// ����Ŀ���������� 
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
				// ��ƥ�� 
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
			cout<< "�ϸ�"<< endl;
		} else {
			cout<< res<< endl;
		}
	}
	return 0;
} 
