#include<stdio.h>

int main(){
	int a, b, *p1, *p2;
	a = 10;
	b = 20;
	p1 = &a;
	p2 = &b;
	printf("sum=%d\n",*p1 + *p2);
}
