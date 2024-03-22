#include<bits/stdc++.h>
using namespace std;
/*�ַ����������������˶�����ʱ�ڣ�0��0���㣬�泯����
����һ���ַ�������<��������ʱ����ת90�㣬">"����˳ʱ����ת90�㣬"."��������ʱ����ǰ��һ�񡣣�40�֣�*/
/*�������ģ�ⷨ���ɽ����*/
struct robot {
	int x;// dir=0,+;dir=2,-
	int y;// dir=3,+;dir=1,-
	int dir;// 0,1,2,3:��������[��ʱ��˳��]����ʱ��(dir+1)%4;˳ʱ��(dir-1+4)%4��
	robot(int a, int b, int d):x(a), y(b), dir(d) {
	}
	// ��ʱ�� 
	void left() {
		dir= (dir+1)%4;
	}
	// ˳ʱ�� 
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
		// ��0��0���㣬�泯��
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
