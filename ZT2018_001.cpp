#include<bits/stdc++.h>
using namespace std;
/*��������������a��b������[a��b]�е����������У�ÿ�����루0~9���������˶��ٴΡ�*/
int main() {
	int count[10];
	int a, b;
	while(cin>> a>> b) {
		memset(count, 0, sizeof(count));
		for(int i=a; i<=b; i++) {
			int temp= i;
			while(temp!= 0) {
				count[temp%10]++;
				temp/= 10;
			}
		}
		for(int i=0; i<10; i++) {
			cout<< count[i]<< " ";
		}
		cout<< endl;
	}
	return 0;
}
