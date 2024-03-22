#include<bits/stdc++.h>
using namespace std;
/*袋子里有2红3绿5黄球，随机从中摸出8个，打印显示所有组合。*/
int main() {
	for(int i=0; i<=2; i++) {
		for(int j=0; j<=3; j++) {
			for(int k=0; k<=5; k++) {
				if(i+j+k== 8) {
					cout<< "红："<< i<< " 绿："<< j<< " 黄："<< k<< endl;
				}
			}
		}
	}
	return 0;
} 
