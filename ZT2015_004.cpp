#include<bits/stdc++.h>
using namespace std;
/*����n��1-10֮������֣��������ַֽ���ʾ��������6������ʾΪ��6��5+1��4+2��4+1+1......*/

int s[10];
void divide(int n, int m, int index) {  //n��Ҫ�ֽ�����֣�m�Ǳ���֮ǰ�����֣�index�ǵݹ����
    if (n == 0) {   //����������ʱ�����
        for (int i = 0; i < index - 1; i++) {   //
            printf("%d + ", s[i]);
        }
        printf("%d\n", s[index - 1]);
    }

    for (int i = n; i > 0; i--) {// ��n�в��һ��i���� 
        if (i <= m) {// s:ֻ����ǰ���С����������  
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
