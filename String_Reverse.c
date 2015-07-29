#include<stdio.h>
#include<conio.h>


// To check if a string is a pallindrome or not
void main(){
	char str[100];
	char str2[100];
	int check = 0;
	int length = 0;
	int a, b;
	a = 0;
	b = 0;

	char *i, *j;

	i = &str;
	j = &str2;

	printf("\n Enter the string to be checked : ");
	gets_s(str,100);

	while ((*i) != '\0'){
		i++;
		length++;
	}
	i--;

	while (a <= length){
		
		*j = *i;
		i--;
		j++;
		a++;
	}

	*j = '\0';

	printf("\n The string reversed is : ");
	for (a = 0; a < length; a++){
		printf("%c", str2[a]);

	}

	i = &str;
	j = &str2;

	while ((*i) != '\0'){
		if ((*i) != (*j)){
			check = 1;
		}
		i++;
		j++;
	}

	if (check == 0){
		printf("\n The string is a pallindrome..");
	}
	else{
		printf("\n The string is not a pallindrome..");
	}
	

   	_getch();

}