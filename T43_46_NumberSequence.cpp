#include<bits/stdc++.h>
using namespace std;
// ϰ��4.6 (�ԣ������ж��[ƥ��])��
//������������ʽ��#include<regex>�� 
int main() {
	int n;
	vector<string> strs;// Сд�ַ�������
	vector<string> strsOrigin; 
	vector<string>searchs;
	while(cin>> n) {
		string str;
		string search;// ģʽ��a[bc2]c 
		for(int i=0; i<n; i++) {
			cin>> str;
			strsOrigin.push_back(str);
			strs.push_back(str);
		}
		cin>> search;
		for(int i=0; i<n; i++) {// ת��ΪСд 
			for(int j=0; j<strs[i].length(); j++) {
				if(strs[i][j]<='Z'&& strs[i][j]>='A') {
					strs[i][j] = strs[i][j]-'A'+'a';
				}
			}
		}
		for(int i=0; i<search.length(); i++) {
			if(search[i]>='A'&& search[i]<='Z') {
				search[i] = search[i]-'A'+'a';
			}
		} 
		int idxL = -1;
		int idxR = -1;
		for(int i=0; i<search.length(); i++) {
			if(search[i]=='[') {
				idxL = i;
			}
			if(search[i]==']') {
				idxR = i;
			}
		} 
		string search_c_l;// a
		string search_c_r;// c
		if(idxL>=0&& idxR>idxL) {
			search_c_l = search.substr(0, idxL);
			search_c_r = search.substr(idxR+1);
			for(int i=idxL+1; i<idxR; i++) {
				searchs.push_back(search_c_l+search[i]+search_c_r);// abc,acc,a2c
			}
		}
		// ����ƥ��(ȫСд)
		for(int i=0; i<n; i++) {
			for(int j=0; j<searchs.size(); j++) {
				if(strs[i].compare(searchs[j]) == 0) {
					cout<< i+1<< " "<< strsOrigin[i]<< endl;
					break;
				}
			}
		} 
		strs.clear();
		strsOrigin.clear();
		searchs.clear();
	}
	return 0;
}
