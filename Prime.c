#include<stdio.h>

void main(){
	int a;
	int i;
	int temp = 0;
	printf(" Please enter the number you want to check: ");
	scanf_s("%d", &a);
	for (i = 2; i < a; i++){
		if ((a%i) == 0) {
			temp = 1;
		}
	}

	if (temp == 0){
		printf(" The number is Prime..");
	}
	else{
		printf(" The number is Composite..");
	}

	getch();
}