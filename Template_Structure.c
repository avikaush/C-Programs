#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Books {
	char name[100];
	char author[100];
	int book_id;
};

void return_data(struct Books *book){
	printf("\n The name of the book is: %s", book->name);
	printf("\n The name of the author is: %s", book->author);
	printf("\n The book id is: %d", book->book_id);
}

void enter_data(struct Books *Book){
	printf("\n Please enter the name of the book: ");
	gets_s(Book->name,100);
	printf("\n please enter the book id: ");
	scanf_s(" %d", &Book->book_id);
	getchar();
	printf("\n Please enter the author of the book: ");
	gets_s(Book->author, 100);
	
}

void main(){

	struct Books b1;
	struct Books b2;

	printf("\n Please enter details of Ronaldo's book: ");
	enter_data(&b1);

	printf("\n Please enter details of Messi's book: ");
	enter_data(&b2);

	printf("\n The details of book are: ");
	return_data(&b1);

	printf("\n The details of the other book are: ");
	return_data(&b2);

	_getch();

}