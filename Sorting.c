#include<stdio.h>

void main(){
	int a[7] = { 3, 2, 7, 4, 10, 2, 44 };
	int b[7] = { 3, 2, 7, 4, 10, 2, 44 };
	
	int i, j;
	int temp;
	for (i = 0; i < 7; i++){
		for (j = 0; j <= i; j++){
			if (a[i] < a[j]){
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

	for (i = 0; i < 7; i++){
		for (j = 0; j <= i; j++){
			if (b[i] > b[j]){
				temp = b[j];
				b[j] = b[i];
				b[i] = temp;
			}
		}
	}


	printf("\n The Array in assending order is : \n ");
	for (i = 0; i < 7; i++){
		printf("\t %d", a[i]);
	}
	
	printf("\n The Array in descending order is : \n ");
	for (i = 0; i < 7; i++){
		printf("\t %d", b[i]);
	}

	getch();

}