#include<stdio.h>
int main(){
	enum days{
		Mon, Tue, Wed, Thurs, Fri, Sat, Sun;
	}
	enum days day;
	int i;
	day=Mon;
	printf("%d\n", Mon);
	printf("%d\n", Tue);
	printf("%d\n", Wed);
	printf("%d\n", Thurs);
	printf("%d\n", Fri);
	printf("%d\n", Sat);
	printf("%d\n", Sun);
}