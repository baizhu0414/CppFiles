#include <iostream>
using namespace std;
#define MAXN 80
int a[MAXN];
int pos[MAXN];
// 习题3.6 
int main() {
    int n;
    while(scanf("%d", &n)!=EOF) {
        for(int i=0; i<n; i++) {
            scanf("%d", &a[i]);
        }
        int idx=-1;
        if(n==1) {
            pos[++idx] = 0;
        } else {
            if(a[0]!=a[1]){
                pos[++idx] = 0;
            }
        }
        for(int i=1; i<n-1; i++) {
            if(a[i]<a[i-1]&& a[i]<a[i+1]){
                pos[++idx] = i;
            } else if(a[i]>a[i-1]&& a[i]>a[i+1]) {
                pos[++idx] = i;
            }
        }
        if(n>1&& a[n-1]!=a[n-2]) {
            pos[++idx] = n-1;
        }
        for(int i=0; i<=idx; i++) {
            if(i!=idx) {
                printf("%d ", pos[i]);
            } else {
                printf("%d\n", pos[i]);
            }
        }
    }
}
// 64 位输出请用 printf("%lld")
