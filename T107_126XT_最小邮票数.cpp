#include <bits/stdc++.h>
using namespace std;
#define MAXM 101
#define MAXN 21

// dp[i][j]=min{dp[i-1][j-wei[i]]+1, dp[i-1][j]}
int main() {
    int M, N;// 总值，邮票数量(不是种类！) 
    int arr[MAXN];// 邮票面值
    int dp[MAXN][MAXM];// 最小邮票数
    while (cin >> M >> N) {
        for (int i = 1; i <= N; i++) {
            cin >> arr[i];
        }
        // 初始化 
        for(int i=0; i<=N; i++) {
        	for(int j=0; j<=M; j++) {
        		if(j== 0) {
        			dp[i][j]= 0;
				} else {
					dp[i][j]= 101;
				}
			}
		}
 
        for (int i = 1; i <= N; i++) {// 当前能使用的数量
            for (int j = 1; j <= M; j++) {// 当前需要拆分的总金额
                if(j-arr[i]>= 0) {
                	// 使用当前邮票或不使用. 
                	dp[i][j] = min(dp[i-1][j], dp[i - 1][j - arr[i]] + 1);
//                	cout<< "i,j:"<< i<< ","<< j<<"//dpij1:"<< dp[i][j]<< endl;
                } else {
                	dp[i][j] = dp[i-1][j]; 
//                	cout<< "i,j:"<< i<< ","<< j<<"//dpij2:"<< dp[i][j]<< endl;
				} 
            }
        }
        if(dp[N][M]== 101) cout<< 0<< endl;// 无解,总值大于面值和 
        else cout << dp[N][M] << endl;
        
//        for(int i=0; i<=N; i++) {
//        	for(int j=0; j<=M; j++) {
//        		cout<< dp[i][j]<< " ";
//			}
//			cout<< endl;
//		}
    }
}

