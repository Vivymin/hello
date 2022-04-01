#define _CRT_SECURE_NO_WARNINGS 1
#include"链表.h"

PNODE initNODE()//初始化链表
{
	PNODE temp=(PNODE)malloc(sizeof(NODE));
	temp->next = NULL;
	return temp;
}

void insertNODE(PNODE head,int newdata)//插入链表
{
	PNODE temp = (PNODE)malloc(sizeof(NODE));
	temp->data = newdata;
#if 0
	//头插法
	temp->next = head->next;
	head->next = temp;
#else
	//尾插法
	PNODE p;
	p = head;
	while (p->next!= NULL)
		p = p->next;
	p->next = temp;
	temp->next = NULL;
#endif
}

void print(PNODE head)
{
	PNODE p;
	p = head->next;
	while (p != NULL)
	{
		printf("%d->", p->data);
		p = p->next;
	}	
	printf("NULL\n");
}
void freeAllNODE(PNODE head)
{
	PNODE p, temp;
	p = head;
	while (p != NULL)
	{
		temp = p->next;
		free(p);
		p = temp;
	}
}

