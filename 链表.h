#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef struct node{//����ڵ�ṹ��
	int data;
	struct node *next;
}NODE, *PNODE;

//����������
PNODE initNODE();
void insertNODE(PNODE head, int newdata);
void print(PNODE head);
void freeAllNODE(PNODE head);
void insert_newNODE(PNODE head, int val, int newdata);