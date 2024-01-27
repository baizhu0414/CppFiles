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
Q�����㵥�����ͷ�ڵ� head �����㷴ת���������ط�ת�������
�ݹ鷽����ϰ��
1.�ݹ�����������ջ���head->nextΪ��
2.�����ݹ鶯����(���head->next�Ѵ���õ������һ��)
	��������2-4�Ѿ��ݹ���ɣ���Ϊ432���ݹ���ɣ���
    ͬʱ1ָ��2��ֻ�����1��2��˳�򼴿ɱ��4321��
    ��reverseList(head) �ȼ��� reverseList(head.next) + �ı�һ��1��2�����ڵ��ָ��
3.����ֵ�����غ����ָ�루432��4��
*/
ListNode* p; 
ListNode* reverseList(ListNode* head) {
	if (head == NULL || head->next == NULL) {
		return head;
	} else {
		// ����234�Ѿ�����ã��������� (��һ����)
		p = reverseList(head->next);
		// ֻ�账��1��432��˳�򼴿ɡ� 
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
	printf("(ԭ����)\n");
	// �ݹ鴦��ת 
	res = reverseList(head);
	while(res != NULL) {
		printf("%d ", res->val);
		res = res->next;
	}
	printf("(��ת������)\n");
	return 0;
}
