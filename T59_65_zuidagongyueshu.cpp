#include<bits/stdc++.h>
using namespace std;

// ����6.5 ���Լ�� ��շת������� 
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
// 64 λ������� printf("%lld")
