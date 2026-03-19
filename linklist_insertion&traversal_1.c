#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node *next;
}NODE;

NODE* ins_Start(NODE *h, int val){
	NODE *nwenode;
	newnode=(NODE*)malloc(sizeof(NODE));
	newnode->data=val;
	newnode->next=h;
	h=newnode;
	return h;
}

void printL(NODE *ptr){
	printf("The link list: ");
	while (ptr!=NULL){
		//printf("%d ->", ptr->data);
		if(ptr->next==NULL)
			printf("%d", ptr->data);
		else
			printf("%d ->", ptr->data);
		ptr=ptr->next;
	}
	//printf("NULL");
}

int main(){
	NODE *head=NULL;
	int val_cnt, val, i;
	Printf("Enter number of values to stat: ");
	printf("%d", &val_cnt);
	for(i=0; i<val_cnt;i++){
		printf("\n Val %d", i+1);
		scanf("%d", &val);
		head = ins_Start(head,val),
		PrintL(head);
	}

}
