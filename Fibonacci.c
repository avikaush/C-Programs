#include<stdio.h>

void main(){
	int first = 1;
	int second = 2;
	int count;
	int i;
	int temp;

	printf("Please enter the number of terms you want in the fibonacci series: ");
	scanf_s("%d", &count);
	printf("\n The Fibonacci series looks like: \n");
	printf(" 1 \t 2");

	for (i = 1; i < (count - 1); i++){
		temp = second;
		second = first + second;
		printf("\t %d", second);
		first = temp;
		

	}

	getch();

	
}