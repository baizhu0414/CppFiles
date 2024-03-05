#include<bits/stdc++.h>
using namespace std;
/*4.������ n ��������Ҫȥ�����������ڿ���ʱ���ͻ��һ��ȫ������ÿ������
����һ����ʼʱ�䣬���������Ľ����֡���������ִ��ʱ�䶼��һ�졣ͬһ
ʱ��ֻ��ִ��һ��������û����ͬ��ʼʱ������ͬ�Ľ����ֵ�����Ҫ����
��Ϊ�˵õ������������Щ������ã���������Ƕ��١�*/
struct node {
	int start;
	int val;
	node(int s, int v):start(s), val(v){}
};

bool cmpUp(node a, node b) {
	if(a.start< b.start) {
		return true;// ���� 
	} else if(a.start== b.start) {
		return a.val> b.val;// ���� 
	} else {
		return false;
	} 
}

int main() {
	int n;
	vector<node> list;
	while(cin>> n) {
		list.clear();
		int s, v;
		for(int i=0; i<n; i++) {
			cin>> s>> v;
			node x= node(s, v);
			list.push_back(x);
		}
		sort(list.begin(), list.end(), cmpUp);
		for(int i=0; i<n; i++) {
			cout<< list[i].start<< " "<< list[i].val<< endl;
		}
		int res= list[0].val;
		for(int i=1; i<n; i++) {
			if(list[i].start!= list[i-1].start) {
				res+= list[i].val;
			}
		}
		cout<< res<< endl;
	}
	return 0;
} 
