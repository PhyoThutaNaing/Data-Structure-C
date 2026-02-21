#include<stdio.h>

int main(){
	int a = 10, *ptr1;
	char c = 'H', *ptr2;
	float f = 3.40, *ptr3;
	ptr1 = &a;
	ptr2 = &c;
	ptr3 = &f;
	printf("sizeof(a) = %lu \t sizeof(ptr1) = %lu\n", sizeof(a), sizeof(ptr1));
	printf("sizeof(c) = %lu \t sizeof(ptr2) = %lu\n", sizeof(c), sizeof(ptr2));
	return 0;
}
