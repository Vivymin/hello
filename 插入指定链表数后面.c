#define _CRT_SECURE_NO_WARNINGS 1
#include"����.h"
void insert_newNODE(PNODE head, int val, int newdata)//����ڵ㵽ָ���������
{
	PNODE p = head->next;
	PNODE temp = (PNODE)malloc(sizeof(NODE));
	temp->data = newdata;
	while (p->data != val&&p != NULL)
		p = p->next;
	temp->next = p->next;
	p->next = temp;
}