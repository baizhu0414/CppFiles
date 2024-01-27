#include <bits/stdc++.h>
using namespace std;

// 多余左右括号分别用?和$在下一行标出。 
int main() {
	string str;
	while(cin>> str) {
		stack<int> brackets;// 左括号 
		string answer(str.size(), ' ');// 右括号 
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
		while(!brackets.empty()) {// 为匹配的左括号 
			answer[brackets.top()] = '$';
			brackets.pop(); 
		}
		cout<< str<< endl;
		cout<< answer<< endl;
	}
    return 0; 
}
// 64 位输出请用 printf("%lld")
