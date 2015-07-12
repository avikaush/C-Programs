#include <stdio.h>

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

void main(){
	int a[10] = { 21, 111, 43, 65, 34, 57, 48, 7, 19, 8 };
	int size = 10;
	int found = 0;
	int i, mid, start, stop;
	int num;
	int check = 0;

	sort_ascending(a, size);
	printf(" \n The array in ascending order looks like: \n");
	for (i = 0; i < size; i++){
		printf("\t %d", a[i]);
	}

	
	

	while (check == 0){

		start = 0;
		stop = size-1;
		mid = (size / 2);
		
		printf("\n Please enter the number to be searched in the array: ");
		scanf_s("%d", &num);


		while (start <= stop){
			if (num == a[mid]){
				found = 1;
				printf(" The number was found at the %d position", mid+1 );
				break;
			}

			else{
				if (num > a[mid]){
					start = mid+1;
					
				}

				if (num < a[mid]){
					stop = mid - 1;
					
				}

				mid = ((start + stop) / 2);
			}
		}

		if (found == 0){
			printf("\n Sorry but the number was not found in the array.. ");
		}

		found = 0;
		printf("\n Would you like to search again.. \n If yes press 0 else 1.. ");
		scanf_s("%d", &check);
		
	}

	getch();
}