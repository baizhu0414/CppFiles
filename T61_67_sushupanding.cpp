#include<bits/stdc++.h>
using namespace std;

// ����6.7 �����ж� 
bool isSuShu(int a) {
    for(int i=2; i<=a/2; i++) {
        if(a%i==0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a;
    while(cin>> a) {
        if(a==0|| a==1|| a<0|| !isSuShu(a)) {
            cout<< "no"<< endl;
        } else {
            cout<< "yes"<< endl;
        }
    }
}
// 64 λ������� printf("%lld")
