#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}NODE;

int main(){
	NODE *head=NULL;
	NODE *newnode;
	newnode=(NODE*)malloc(sizeof(NODE));
	newnode->data=20;
	newnode->next=NULL;
	head=newnode;
	printf("First Value* %d", head->data);
}