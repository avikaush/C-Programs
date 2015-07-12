#include<stdio.h>

void sort_ascending(int *a, int size){

	int i, j;
	int temp;
	for (i = 0; i < size; i++){
		for (j = 0; j <= i; j++){
			if (a[i] < a[j]){
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}

}

void sort_descending(int *b, int size){

	int i, j;
	int temp;

	for (i = 0; i < 7; i++){
		for (j = 0; j <= i; j++){
			if (b[i] > b[j]){
				temp = b[j];
				b[j] = b[i];
				b[i] = temp;
			}
		}
	}

}

void main(){
	int a[7] = { 3, 2, 7, 4, 10, 2, 44 };
	int b[7] = { 3, 2, 7, 4, 10, 2, 44 };

	int i;

	int size = 7;
	
	sort_ascending(a, size);

	sort_descending(b, size);


	


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