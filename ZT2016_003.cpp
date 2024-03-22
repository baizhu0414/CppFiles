#include<bits/stdc++.h>
using namespace std;
/*把m个同样的苹果放在n个同样的盘子里，
允许有的盘子空着不放，问共有多少种不同的分法？
（5，1，1和1，5，1 是同一种分法）*/
// https://zhuanlan.zhihu.com/p/656786396
int getcount(int apple, int plant) {
    if (apple == 0 || plant == 1) {
        return 1;
    }
    if (plant > apple) {
        return getcount(apple, apple);
    } else {
        return getcount(apple, plant - 1) + getcount(apple - plant, plant);
    }
}

int main() {
	int m, n;// m:苹果，n:盘子
	while(cin>> m>> n) {
		// n>m:m苹果放到m盘子，剩下n-m个空盘子不用管； 
		// n<=m:1)一个空盘子，m苹果放到n-1盘子；2)没有空盘子，m-n苹果放到n盘子中。 
		cout<< getcount(m, n)<< endl;
	} 
	return 0;
}
