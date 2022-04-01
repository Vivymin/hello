#define _CRT_SECURE_NO_WARNINGS 1
#include"链表.h"

int main()//对链表进行操作
{
	PNODE head = (PNODE)malloc(sizeof(NODE));
	head = initNODE();//初始化节点
	for (int i = 0; i < 10; i++)//创建爱链表
		insertNODE(head, i);
	insert_newNODE(head, 5, 25);//插入新的节点到指定节点后
	print(head);//打印链表
	freeAllNODE(head);//释放空间
}