#include <iostream>
using namespace std;

int Fun(int m, int n) {
    if(m>n || m==0) {
        return 0;
    }
    if(m==n) {
        return 1;
    }
    return Fun(2*m, n) + Fun(2*m+1, n) + 1;
}

int main() {
    int n, m;
    while (cin >> m >> n) { // 注意 while 处理多个 case
        if(m==0&& n==0) {
            break;
        }
        cout<< Fun(m, n)<< endl;
    }
}
// 64 位输出请用 printf("%lld")
