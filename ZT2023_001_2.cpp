#include<bits/stdc++.h>
using namespace std;
/*�������һ��������Ȼ�����һ����x����ѯ�Ƿ����ҵ���������֮�͵���x��
�ҵ�һ�鲢����ֵ���ɣ����Ҳ��������error������ʱ�临�Ӷ�<O(n^2)��
Ҫ��д����Ӧ˼·�������㹻��ע�͡�*/

int main() {
	int n;
	cin>> n;
	map<int, int> mp;
	vector<int> list(n);
	for(vector<int>::iterator it= list.begin(); it!= list.end(); ++it) {
//		cout<< *it<< " ";
		cin>> *it;
		mp[*it]++;// [key]:ûkey����룬��key�򲻲��� 
	}
	int x;
	cin>> x;
	for(map<int, int>::iterator it=mp.begin(); it!=mp.end(); ++it) {
		if(mp[x-it->first]!=0) {
			if(x-it->first!= it->first) {
				cout<< it->first<< " "<< x-it->first<< endl;
				return 0;
			} else if(x-it->first== it->first&& it->second>1){
				cout<< it->first<< " "<< x-it->first<< endl;
				return 0;
			} else {
				continue;
			}
		} else {
			continue;
		}
	}
	cout<< "error"<< endl;
	return 0;
} 
