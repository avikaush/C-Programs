#include<stdio.h>

void main(){
	int a;
	int *b; // Decalration of the pointer
	int **c; // Declaration of another pointer 

	a = 6;
	b = &a;
	c = &b;

	printf("%d \n", ++*b);
	printf("%x \n", b);
	printf("%d \n", a);
	printf("%d \n", **c);

	getch();


}