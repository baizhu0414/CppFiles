#include <bits/stdc++.h>
using namespace std;

int Fun(int n) {
    if(n==0) {
        return 0;
    }
    if(n==1) {
        return 1;
    }
    return Fun(n-1) + Fun(n-2);
}

int main() {
    int n;
    while(cin>> n) {
        cout<< Fun(n)<< endl;
    }
}
// 64 Î»Êä³öÇëÓÃ printf("%lld")
