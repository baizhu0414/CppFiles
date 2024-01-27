#include<bits/stdc++.h>
using namespace std;

int max(int G1,int G2,int G3) {
	int m = max(G1,G2);
	m = max(m, G3);
	return m;
}

int main() {
	// Âú·ÖP£¬¹«²îT 
	int P, T, G1, G2, G3, GJ;
	while(scanf("%d%d%d%d%d%d", &P, &T, &G1, &G2, &G3, &GJ)!=EOF) {
		if(abs(G1-G2)<=T) {
			printf("%.1f\n", (G1+G2)*1.0/2);
			continue;
		} else {
			int cha31 = abs(G3-G1);
			int cha32 = abs(G3-G2);
			if(cha31<=T&&cha32>T) {
				printf("%.1f\n", (G1+G3)*1.0/2);
			} else if (cha31>T&&cha32<=T) {
				printf("%.1f\n", (G2+G3)*1.0/2);
			} else if (cha31<=T&&cha32<=T) {
				printf("%.1f\n", max(G1,G2,G3)*1.0);
			} else {
				printf("%.1f\n", GJ*1.0);
			}
		}
	}
	return 0;
}
