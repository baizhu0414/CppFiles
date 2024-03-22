#include<bits/stdc++.h>
using namespace std;
/*猴子第一天摘了若干个桃子，当即吃了一半，还不解馋，又多吃了一个；
第二天，吃剩下的桃子的一半，还不过瘾，又多吃了一个；
以后每天都吃前一天剩下的一半多一个，
到第10天想再吃时，只剩下一个桃子了。问第一天共摘了多少个桃子？*/

int f(int day, int num) {
	// 第一天的数量直接返回 
	if(day== 1) return num;
	// 从第10天往前倒退 
	return f(day-1, (num+1)*2);
}

int main() {
	int n= 10;
	// 第10天只剩1个桃子 
	cout<< f(n, 1)<< endl;
//	int s = 1;
//    for(int i = 1; i < 10; ++i){
//        s = (s + 1) * 2;
//    }
//    cout << s << endl;
	return 0;
}
