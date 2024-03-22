#include<bits/stdc++.h>
using namespace std;
/*输入n（1-10之间的数字），将数字分解显示。如数字6可以显示为：6，5+1，4+2，4+1+1......*/

int s[10];
void divide(int n, int m, int index) {  //n是要分解的数字，m是保存之前的数字，index是递归深度
    if (n == 0) {   //当符合条件时，输出
        for (int i = 0; i < index - 1; i++) {   //
            printf("%d + ", s[i]);
        }
        printf("%d\n", s[index - 1]);
    }

    for (int i = n; i > 0; i--) {// 从n中拆分一个i下来 
        if (i <= m) {// s:只保存前大后小的数字序列  
            s[index] = i;
            divide(n - i, i, index + 1);
        }
    }
}

int main() {
	int n;
	cin>> n;
	divide(n, n, 0);
	return 0;
}
