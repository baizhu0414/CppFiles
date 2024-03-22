#include<bits/stdc++.h>
using namespace std;
/*随机生成一堆整数，然后给定一个数x，查询是否能找到任意两数之和等于x，
找到一组并返回值即可，若找不到则输出error，考虑时间复杂度<O(n^2)。
要求写出相应思路，并有足够的注释。*/

int main() {
	int n;
	cin>> n;
	map<int, int> mp;
	vector<int> list(n);
	for(vector<int>::iterator it= list.begin(); it!= list.end(); ++it) {
//		cout<< *it<< " ";
		cin>> *it;
		mp[*it]++;// [key]:没key则插入，有key则不插入 
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
