// 不妨将数据扩大到3倍，则三种鸡的价格分别是15、9、1元。 则每次最小计算单位为1元。
#include<iostream>
using namespace std;
// KY156 百鸡问题
// 注意：x,y,z的如果是与n（金钱）进行比较，则都只能与金钱比较。
// 不能x,y通过金钱限制，而z使用100-x-y（数量），这样会出现错误，比较尺度不同。
// 另外，等号不能丢。

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
