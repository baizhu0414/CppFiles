#include <bits/stdc++.h>
using namespace std;

// �����������ŷֱ���?��$����һ�б���� 
int main() {
	string str;
	while(cin>> str) {
		stack<int> brackets;// ������ 
		string answer(str.size(), ' ');// ������ 
		for(int i=0; i<str.size(); i++) {
			if(str[i]=='(') {
				brackets.push(i);
			} else if(str[i]==')') {
				if(brackets.empty()) {
					answer[i] = '?';
				} else {
					brackets.pop();
				} 
			}
		} 
		while(!brackets.empty()) {// Ϊƥ��������� 
			answer[brackets.top()] = '$';
			brackets.pop(); 
		}
		cout<< str<< endl;
		cout<< answer<< endl;
	}
    return 0; 
}
// 64 λ������� printf("%lld")
