#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, *ptr, n; 	//declare pointer
	printf("Type the number of elements: ");
	scanf("%d", &n);
	ptr=(int *)calloc(n, sizeof(int));


	for(i=0; i<5; i++){
		printf("Enter the values of element %d: ", i);
		scanf("%d", ptr+i);
	}

	for(i=0; i<5; i++){
		printf("%d \t ", *(ptr+i));
	}
}