#include<bits/stdc++.h>
using namespace std;

void sortUp(int a[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void sortDown(int a[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (a[i] < a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

// return true则不交换 
bool cmpDown(int a, int b) {
	return a>b;
}

bool cmpUp(int a, int b) {
	return a<b;
} 

void printList(int a[], int n) {
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d", a[i]);
        } else {
            printf("%d ", a[i]);
        }
    }
}

int main() {
    int n1, n2;// n1:奇数个数，n2：偶数个数
    int a1[10];//奇数
    int a2[10];//偶数
    int temp;
    while (cin >> temp) {
        n1 = n2 = 0;
        if (temp % 2 == 0) {
            a2[n2++] = temp;
        } else {
            a1[n1++] = temp;
        }
        for (int i = 1; i < 10; i++) {
            scanf("%d", &temp);
            if (temp % 2 == 0) {
                a2[n2++] = temp;
            } else {
                a1[n1++] = temp;
            }
        }
//        sortDown(a1, n1);
//        sortUp(a2, n2);
		sort(a1, a1+n1, cmpDown);
		sort(a2, a2+n2, cmpUp);
        printList(a1, n1);
        printf(" ");
        printList(a2, n2);
        printf("\n");
    }
    return 0;
}
