#include<bits/stdc++.h>
using namespace std;
/*����һ���������ٴ������һ�������ҳ�������������ֵĴ�����λ�á�*/

int main() {
	int x, n;// x:������n:���鳤�� 
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
		cout<< "����"<< count<< "�Σ�λ���ǣ�0��ʼ����";
		for(int i=0; i<pos.size(); i++) {
			cout<< pos[i]<< " ";
		} 
		cout<< endl;
	}
	return 0;
}
