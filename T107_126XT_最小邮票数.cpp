#include <bits/stdc++.h>
using namespace std;
#define MAXM 101
#define MAXN 21

// dp[i][j]=min{dp[i-1][j-wei[i]]+1, dp[i-1][j]}
int main() {
    int M, N;// ��ֵ����Ʊ����(�������࣡) 
    int arr[MAXN];// ��Ʊ��ֵ
    int dp[MAXN][MAXM];// ��С��Ʊ��
    while (cin >> M >> N) {
        for (int i = 1; i <= N; i++) {
            cin >> arr[i];
        }
        // ��ʼ�� 
        for(int i=0; i<=N; i++) {
        	for(int j=0; j<=M; j++) {
        		if(j== 0) {
        			dp[i][j]= 0;
				} else {
					dp[i][j]= 101;
				}
			}
		}
 
        for (int i = 1; i <= N; i++) {// ��ǰ��ʹ�õ�����
            for (int j = 1; j <= M; j++) {// ��ǰ��Ҫ��ֵ��ܽ��
                if(j-arr[i]>= 0) {
                	// ʹ�õ�ǰ��Ʊ��ʹ��. 
                	dp[i][j] = min(dp[i-1][j], dp[i - 1][j - arr[i]] + 1);
//                	cout<< "i,j:"<< i<< ","<< j<<"//dpij1:"<< dp[i][j]<< endl;
                } else {
                	dp[i][j] = dp[i-1][j]; 
//                	cout<< "i,j:"<< i<< ","<< j<<"//dpij2:"<< dp[i][j]<< endl;
				} 
            }
        }
        if(dp[N][M]== 101) cout<< 0<< endl;// �޽�,��ֵ������ֵ�� 
        else cout << dp[N][M] << endl;
        
//        for(int i=0; i<=N; i++) {
//        	for(int j=0; j<=M; j++) {
//        		cout<< dp[i][j]<< " ";
//			}
//			cout<< endl;
//		}
    }
}

