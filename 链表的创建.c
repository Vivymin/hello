#define _CRT_SECURE_NO_WARNINGS 1
#include"����.h"

PNODE initNODE()//��ʼ������
{
	PNODE temp=(PNODE)malloc(sizeof(NODE));
	temp->next = NULL;
	return temp;
}

void insertNODE(PNODE head,int newdata)//��������
{
	PNODE temp = (PNODE)malloc(sizeof(NODE));
	temp->data = newdata;
#if 0
	//ͷ�巨
	temp->next = head->next;
	head->next = temp;
#else
	//β�巨
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

