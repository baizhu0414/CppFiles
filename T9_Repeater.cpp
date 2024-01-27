#include<bits/stdc++.h>
using namespace std;
/* https://blog.csdn.net/zwqjoy/article/details/116520425 */
// 递归三要素：1.终止条件 2.本级递归的动作 3.返回值 

int n;// small的大小 
char small[6][6];
char pic[3007][3007];

void drawSmall(int l, int r) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			pic[l+i][r+j] = small[i][j];
		}
	}
}

// q为递归层次；l,r为当前绘画始址 
void draw(int q, int l, int r) {
	if(q == 1) {
		// 1.终止条件：最后一层 
		drawSmall(l, r);
	} else {
		// 2.本级递归的动作：第q层时，画出q-1层图像 
		int size = pow(n, q-1);
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				// 为空则q-1层为全空图 
				if(small[i][j] == ' ') {
					continue;
				} 
				// 画一个q-1层次对应图，大小为n的q-1次方
				draw(q-1, l + i*size, r + j*size); 
			}
		} 
	}
	// 3.返回值为空 
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
		int size = pow(n, q);// n的q次方 
		for(int i=0; i<size; i++) {
			for(int j=0; j<size; j++) {
				pic[i][j] = ' ';
			}
		}
		draw(q, 0, 0); // 绘制图片 
		for(int i=0; i<size; i++) {
			for(int j=0; j<size; j++) {
				printf("%c", pic[i][j]);
			}
			printf("\n");
		}
	} 
	return 0;
}
