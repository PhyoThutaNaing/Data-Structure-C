#include<stdio.h>
void swap(int*, int*);

int main(){
	int a=10, b=20;
	printf("Before Swap\n");
	printf("a=%d \t b=%d\n", a,b);
	swap(&a, &b);
	printf("After Swap\n");
	printf("a=%d \t b=%d\n", a,b);

}

void swap(int*x,int*y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}