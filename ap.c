#include<stdio.h>

int main (){
	int arr[5] = {1, 2, 4, 3,6};
	printf("Address of array = %p\n", arr);
	printf("Address of array = %p", &arr[0]);
}