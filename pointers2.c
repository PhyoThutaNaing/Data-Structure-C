#include<stdio.h>

int main(){
	int a = 10, *ptr1;
	int *ptr;
	ptr = &a;
	a=9;
	printf("a=%d\n",a);
	*ptr = 20;
	printf("a=%d\n",a);
	printf("a=%d\n",*ptr);
	return 0;
}
