#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef struct node{//定义节点结构体
	int data;
	struct node *next;
}NODE, *PNODE;

//函数的声明
PNODE initNODE();
void insertNODE(PNODE head, int newdata);
void print(PNODE head);
void freeAllNODE(PNODE head);
void insert_newNODE(PNODE head, int val, int newdata);