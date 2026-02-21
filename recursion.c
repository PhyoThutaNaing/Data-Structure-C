#include<stdio.h>
void print(int x){
	if(x==0){
		return;
	}
	print(x-1);
	printf("%d \t", x);
}
int main(){
	int n= 10;
	print(n);
}