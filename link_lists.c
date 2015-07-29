#include<stdio.h>
#include<stdlib.h>

typedef struct List{
	int val;
	struct List *next;
}list;

void show_list(list *head){
	list *current;
	current = head;
	printf("\n The list looks like: \n");
	while(current != NULL){
		printf(" %d \t", current->val);
		current = current->next;
	}
}

void push_list(list *head,int val){
	list *current;
	current = head;
	while (current->next != NULL){
		current = current->next;
	}

	current->next = malloc(sizeof(list));
	current->next->val = val;
	current->next->next = NULL;
}

void pop_list(list *head){
	list *current;
	current = head;

	while (current->next->next != NULL){
		current = current->next;
	}

	printf("\n The number being popped out of the list is : %d", current->next->val);
	free(current->next);
	current->next = NULL;
}

void f_push_list(list **head, int val){
	list *current;
	current = malloc(sizeof(list));
	current->val = val;
	current->next = *head;
	*head = current;
}

void f_pop_list(list **head){
	list *current;
	list *new_point = NULL;
	new_point = (*head)->next;
	printf("\n the number being popped from the front of the list is: %d", (*head)->val);
	free(*head);
	*head = new_point;
	
}

void main(){

	list *head = NULL;
	int val;
	head = malloc(sizeof(list));

	head->val = 1;
	head->next = NULL;

	head->next = malloc(sizeof(list));
	head->next->val = 2;
	head->next->next = NULL;

	printf("\n Please enter the value to be entered : ");
	scanf_s(" %d", &val);

	push_list(head, val);
	show_list(head);

	printf("\n Please enter the value to be entered in the beginning : ");
	scanf_s(" %d", &val);

	f_push_list(&head, val);
	show_list(head);

	pop_list(head);
	show_list(head);

	f_pop_list(&head);
	show_list(head);

	char *states[] = { "California", "Texas", "Oregon", "Idaho" };
	char **st = &states;

	for (int j = 0; j < 4; j++){
		printf("\n %s ", *st);
		(st)++;
	} 

	_getch();
}