#include<stdio.h>

int main (){

int arr[5] = {4,6,9,8,2};

int *ptr = arr , i;

for (i=0; i<5;i++){
	printf("%d\t", *(ptr+i)); 
}

printf("\n"); 

for (i=0; i<5;i++){
	printf("%d\t", *(arr+i));
}

printf("\n"); 

for (i=0; i<5;i++){
	printf("%d\t", arr[i]);
}

printf("\n"); 

for (i=0; i<5;i++){
	printf("%d\t", ptr[i]);
}
}   