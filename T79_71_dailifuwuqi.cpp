#include<iostream>
#include<string.h>
using namespace std;
// XT7.1 ���������
// tip:̰��---ÿ��Ѱ�ҷ������ip��proxy��ַ��
int process(string proxy[], int n, string ips[], int m) {
	int count=0;
	// i++�ڴ˴��ᵼ�¶���һ��ip���ڲ���i������£�����whileѭ��������˴���
	for(int i=0; i<m; ) { 
		int curMax=0;
		for(int j=0; j<n; j++) { // ����proxy�ҵ���ǰ���Է������ip��proxy��
			int k=i;
			while(k<m&& proxy[j]!=ips[k]) { // k��ip��ַ 
				k++;
			}
			if(curMax<k-i) curMax=k-i;
		}
		if(curMax==0) { // ��һ���޷���������ˣ���ʧ�ܡ��磺ֻ��һ��proxy����ip�з����ظ���
			return -1;
		}
		i+=curMax;
		count++;
	}
	return count-1;// ��һ�β����л������ѡ��8�Σ���ʵ�л���7�Ρ� 
}

int main() {
	string proxy[1001];
	string ips[5001];
	int n, m;//n�������������, m-IP��ַ
	while(scanf("%d", &n)!=EOF) {
		for(int i=0; i<n; i++) {
			cin>>proxy[i];
		}
		scanf("%d", &m);
		for(int i=0; i<m; i++) {
			cin>>ips[i];
		}//��������
		printf("%d", process(proxy, n, ips, m));
	}
	return 0;
}

