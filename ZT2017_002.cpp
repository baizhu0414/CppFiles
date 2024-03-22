#include<bits/stdc++.h>
using namespace std;
/*一对兔子，从出生后第3个月起每个月都生一对兔子。
小兔子长到第3个月后每个月又生一对兔子。假如兔子都不死，
请问第1个月出生的一对兔子，第n个月有多少只兔子？*/ 
// 模拟之后可以观察到符合Feibolaci数列 
int feibo(int n){
    if(n == 1 || n == 2){
        return 2;
    }else{
        return feibo(n - 1) + feibo(n - 2);
    }
}

int main() {
	int n;
	int count=1;
	while(cin>> n) {
		cout << "第" << n << "个月有" << feibo(n) << "只兔子" << endl;
	}
	return 0;
}
