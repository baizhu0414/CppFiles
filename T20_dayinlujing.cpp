#include<bits/stdc++.h>
using namespace std;
// ���ѣ���ѧ��Ĭд��
/*
  1.��ʹ��vector<string>��'����'���洢·��'vector<string>[]':[{"a", "b", "cst"}, {"a", "c"}].
  2.���ʱͳ������vector<string>��ͬ�ִ�����
  3.�ָ��ַ������֣�'a\b\c'��'a\' 
*/ 
#define maxn 10
vector<string> vecStrs[maxn];// ��·��stringתΪvector<string>

// �ַ��������������С� 
void sortUp(string strs[], int n) {
	string temp;
	for(int i=0; i<n; i++) {
		for(int j=i; j<n; j++) {
			if(strs[i].compare(strs[j])>0) {// strs[i]>strs[j]�򽻻�
				temp = strs[i];
				strs[i] = strs[j];
				strs[j] = temp;
			}
		}
	}
}

int main() {
	string strs[maxn];
	int n;
	while(cin>>n) {
		memset(vecStrs, 0, sizeof(vecStrs));
		if(n==0)return 0;
		for(int i=0; i<n; i++) {
			cin>> strs[i];
		}
		sortUp(strs, n);
		
		// �ָ��ַ�������Ϊvector<string>����
		for(int i=0; i<n; i++) {
			string curS = strs[i];
			string temp;
			for(int j=0; j<curS.length(); j++) {
				if(curS[j] != '\\') {
					temp+=curS[j];
				} else if(temp.length()>0){// 'd\'��ʽ 
					// vecStrs[i]:������vector<string>
					vecStrs[i].push_back(temp);
					temp=""; 
				}
				// 'a\b'���һ���ַ������� 
				if(j == curS.length()-1 && temp.length()>0) {
					vecStrs[i].push_back(temp);
					temp=""; 
				}
			} 
		} 
		
		// �����һ��·�� 
		for(int i=0; i<vecStrs[0].size(); i++) {
			for(int j=0; j<i; j++) cout<< "  ";
			cout<< vecStrs[0][i]<< endl;
		} 
		for(int i=1; i<n; i++) {
			int same = 0;
			// �ҵ���ͬ�ַ������� 
			while(same<vecStrs[i].size()
				&& same<vecStrs[i-1].size()
				&& vecStrs[i][same] == vecStrs[i-1][same]) {
					same++;
			}
			// �����i��·�� 
			for(int j=same; j<vecStrs[i].size(); j++) {
				for(int k=0; k<j; k++) cout<< "  ";
				cout<< vecStrs[i][j]<< endl;
			}
		}
	}
	return 0;
}
