#include<bits/stdc++.h>
using namespace std;
/*输入一个整数，再从输入的一组数中找出输入的整数出现的次数和位置。*/

int main() {
	int x, n;// x:整数，n:数组长度 
	vector<int> pos;
	while(cin>> x>> n) {
		pos.clear();
		int count= 0;
		int temp;
		for(int i=0; i<n; i++)  {
			cin>> temp;
			if(temp== x) {
				pos.push_back(i);
				count++;
			}
		}
		cout<< "出现"<< count<< "次，位置是（0开始）：";
		for(int i=0; i<pos.size(); i++) {
			cout<< pos[i]<< " ";
		} 
		cout<< endl;
	}
	return 0;
}
