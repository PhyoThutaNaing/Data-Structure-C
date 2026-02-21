#include<stdio.h>

typedef struct{
	float *real;
	float *img;
}complexNo;

void swap(complexNo *a, complexNo *b){
	complexNo tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
int main(){
	complexNo a={2.0, 3.0}, b={-4.0, 5.0};

	printf("\nComplex no.1: (%.2f + %.2fj)", a>real, a>img);
	printf("\nComplex no.2: (%.2f + %.2fj)", b>real, b>img);
/*
	a = b;
	printf("\n\n*****************After Copy***************\n\n");

	printf("Complex no.1: (%.2f + %.2fj)", a.real, a.img);
	printf("Complex no.2: (%.2f + %.2fj)\n", b.real, b.img);
*/
}