// ��������������3���������ּ��ļ۸�ֱ���15��9��1Ԫ�� ��ÿ����С���㵥λΪ1Ԫ��
#include<iostream>
using namespace std;
// KY156 �ټ�����
// ע�⣺x,y,z���������n����Ǯ�����бȽϣ���ֻ�����Ǯ�Ƚϡ�
// ����x,yͨ����Ǯ���ƣ���zʹ��100-x-y������������������ִ��󣬱Ƚϳ߶Ȳ�ͬ��
// ���⣬�ȺŲ��ܶ���

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        n = 3 * n;
        for (int x = 0; 15 * x <= n; x++) {
            for (int y = 0; 9 * y + 15 * x <= n; y++) {
                for (int z = 0; z + 9 * y + 15 * x <= n; z++) {
                    if (x + y + z == 100) {
                        printf("x=%d,y=%d,z=%d\n", x, y, z);
                    }
                }
            }
        }
    }
    return 0;
}
