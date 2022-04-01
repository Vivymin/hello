#define _CRT_SECURE_NO_WARNINGS 1
#include"链表.h"
void insert_newNODE(PNODE head, int val, int newdata)//插入节点到指定链表后面
{
	PNODE p = head->next;
	PNODE temp = (PNODE)malloc(sizeof(NODE));
	temp->data = newdata;
	while (p->data != val&&p != NULL)
		p = p->next;
	temp->next = p->next;
	p->next = temp;
}