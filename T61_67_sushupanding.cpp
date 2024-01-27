#include<bits/stdc++.h>
using namespace std;

// 例题6.7 素数判定 
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
// 64 位输出请用 printf("%lld")
