#include<bits/stdc++.h>
using namespace std;

#define MAXN 1000
struct Node{
	int x;
	int y;
};

// true‘Ú≤ªΩªªª 
bool cmpUp(Node a, Node b) {
	if(a.x!=b.x) {
		return a.x<b.x;
	} else {
		return a.y<b.y;
	}
}

int main() {
	int n;
	Node nodes[MAXN];
	while(scanf("%d", &n)!=EOF) {
		for(int i=0; i<n; i++) {
			scanf("%d%d", &nodes[i].x, &nodes[i].y);
		}
		sort(nodes, nodes+n, cmpUp);
		printf("%d %d\n", nodes[0].x, nodes[0].y);
	}
	return 0;
}
