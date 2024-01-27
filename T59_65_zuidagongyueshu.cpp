#include<bits/stdc++.h>
using namespace std;

// 例题6.5 最大公约数 （辗转相除法） 
int main() {
    int a, b;
    while (cin >> a >> b) {
        if (a < b) {
            int temp = a;
            a = b;
            b = temp;
        }
        int yushu = -1;
        while (yushu != 0) {
            yushu = a % b;
            a = b;
            b = yushu;
        }
        cout << a<< endl;
    }
}
// 64 位输出请用 printf("%lld")
