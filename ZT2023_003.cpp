#include<bits/stdc++.h>
using namespace std;
/*字符串操作，机器人运动，此时在（0，0）点，面朝东，
输入一串字符串，“<”代表逆时针旋转90°，">"代表顺时针旋转90°，"."代表往此时方向前进一格。（40分）*/
/*此题采用模拟法即可解决。*/
struct robot {
	int x;// dir=0,+;dir=2,-
	int y;// dir=3,+;dir=1,-
	int dir;// 0,1,2,3:东北西南[逆时针顺序]（逆时针(dir+1)%4;顺时针(dir-1+4)%4）
	robot(int a, int b, int d):x(a), y(b), dir(d) {
	}
	// 逆时针 
	void left() {
		dir= (dir+1)%4;
	}
	// 顺时针 
	void right() {
		dir= (dir-1+4)%4; 
	}
	void walk() {
		if(dir== 0) {
			x++;
		} else if(dir== 2) {
			x--;
		} else if(dir== 3) {
			y++;
		} else if(dir== 1){
			y--;
		}
	}
};
int main() {
	string str;
	while(cin>>str) {
		// （0，0）点，面朝东
		robot a= robot(0, 0, 0);
		for(int i=0; i<str.length(); i++) {
			if(str[i]=='<') {
				a.left();
			} else if(str[i]=='>') {
				a.right();
			} else if(str[i]=='.') {
				a.walk();
			} 
		}
		cout<< "("<< a.x<< ","<< a.y<< ")"<< endl;
	}
	return 0;
}
