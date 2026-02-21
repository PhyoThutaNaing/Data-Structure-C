#include <stdio.h>
void incrementbyone(int *ar, int n);

int main(){
	int arr[5], i;
	printf("Enter Values: ");
	for(i=0; i<5 ; i++){
		scanf("%d", &arr[i]);
	}


incrementbyone(arr, 5);
printf("Array: ");
for(i=0; i<5; i++){
	printf("%d\t", arr[i]);
}
}

void incrementbyone (int *ar, int n){
	int i;
	for(i=0; i<n; i++){
		ar[i] = ar[i] +1;
	}
}