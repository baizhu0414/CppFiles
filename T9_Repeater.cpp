#include<bits/stdc++.h>
using namespace std;
/* https://blog.csdn.net/zwqjoy/article/details/116520425 */
// �ݹ���Ҫ�أ�1.��ֹ���� 2.�����ݹ�Ķ��� 3.����ֵ 

int n;// small�Ĵ�С 
char small[6][6];
char pic[3007][3007];

void drawSmall(int l, int r) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			pic[l+i][r+j] = small[i][j];
		}
	}
}

// qΪ�ݹ��Σ�l,rΪ��ǰ�滭ʼַ 
void draw(int q, int l, int r) {
	if(q == 1) {
		// 1.��ֹ���������һ�� 
		drawSmall(l, r);
	} else {
		// 2.�����ݹ�Ķ�������q��ʱ������q-1��ͼ�� 
		int size = pow(n, q-1);
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				// Ϊ����q-1��Ϊȫ��ͼ 
				if(small[i][j] == ' ') {
					continue;
				} 
				// ��һ��q-1��ζ�Ӧͼ����СΪn��q-1�η�
				draw(q-1, l + i*size, r + j*size); 
			}
		} 
	}
	// 3.����ֵΪ�� 
}

int main() {
	int q;
	while(scanf("%d", &n) != EOF) {
		getchar();
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				small[i][j] = ' ';
			}
		}
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				small[i][j] = getchar();
			}
			getchar();
		}
		scanf("%d", &q);
		int size = pow(n, q);// n��q�η� 
		for(int i=0; i<size; i++) {
			for(int j=0; j<size; j++) {
				pic[i][j] = ' ';
			}
		}
		draw(q, 0, 0); // ����ͼƬ 
		for(int i=0; i<size; i++) {
			for(int j=0; j<size; j++) {
				printf("%c", pic[i][j]);
			}
			printf("\n");
		}
	} 
	return 0;
}
