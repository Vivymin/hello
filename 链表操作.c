#define _CRT_SECURE_NO_WARNINGS 1
#include"����.h"

int main()//��������в���
{
	PNODE head = (PNODE)malloc(sizeof(NODE));
	head = initNODE();//��ʼ���ڵ�
	for (int i = 0; i < 10; i++)//����������
		insertNODE(head, i);
	insert_newNODE(head, 5, 25);//�����µĽڵ㵽ָ���ڵ��
	print(head);//��ӡ����
	freeAllNODE(head);//�ͷſռ�
}