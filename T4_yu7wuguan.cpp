#include<iostream>
using namespace std;

int haveSeven(int i) {
    while (i != 0) {
        if (i % 10 == 7) {
            return 1;
        }
        i /= 10;
    }
    return 0;
}

// 判断是否与7相关，是返回1， 否返回0.
int judge(int i) {
    if (i % 7 == 0 || haveSeven(i)) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    // 平方和
    int total = 0;
    while (scanf("%d", &n) != EOF) {
        for (int i = 1; i <= n; i++) {
            if (!judge(i)) {
                total += i * i;
            }
        }
        printf("%d\n", total);
    }
    return 0;
}
