#include<bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
	ListNode() : val(0), next(NULL) {}
	ListNode(int x) : val(x), next(NULL) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

/*
Q：给你单链表的头节点 head ，请你反转链表，并返回反转后的链表。
递归方法练习：
1.递归结束条件：空或者head->next为空
2.本级递归动作：(针对head->next已处理好的情况走一遍)
	不妨假设2-4已经递归完成，则为432（递归完成）；
    同时1指向2，只需调换1和2的顺序即可变成4321。
    即reverseList(head) 等价于 reverseList(head.next) + 改变一下1，2两个节点的指向
3.返回值：返回后面的指针（432的4）
*/
ListNode* p; 
ListNode* reverseList(ListNode* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	} else {
		// 假设234已经处理好，保存起来 (不一定行)
		p = reverseList(head->next);
		// 只需处理1和432的顺序即可。 
		head->next->next = head;
		head->next = NULL;
		return p;
	}
}

int main() {
	ListNode* head;
	ListNode* newNode1 = new ListNode(1);
	ListNode* newNode2 = new ListNode(2);
	ListNode* newNode3 = new ListNode(3);
	ListNode* newNode4 = new ListNode(4);
	head = newNode1;
	newNode1->next = newNode2;
	newNode2->next = newNode3;
	newNode3->next = newNode4;
	newNode4->next = NULL;
	
	ListNode* res = head;
	while(res != NULL) {
		printf("%d ", res->val);
		res = res->next;
	}
	printf("(原链表)\n");
	// 递归处理反转 
	res = reverseList(head);
	while(res != NULL) {
		printf("%d ", res->val);
		res = res->next;
	}
	printf("(反转后链表)\n");
	return 0;
}
