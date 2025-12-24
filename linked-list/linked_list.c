#include<stdio.h>
#include<stdlib.h>

//Declaring Node
typedef struct NODE {  

	int value; 
	struct NODE* next;

} node;

node* create_new_node(int data){

	node* new_node = (node* )malloc(sizeof(node));
	new_node->value = data;
	new_node->next = NULL;

	return new_node;
}

void insert_beginning(node** head ,int value){
	node* new_node = create_new_node(value);
	if(*head == NULL){

		*head = new_node;

		return;
	}
	new_node->next = *head;
	*head = new_node;
}

void insert_ending(node** head, int value){
	node* new_node = create_new_node(value);
	if(*head == NULL){
		*head = new_node;
		return;	
	}

	node* temp = *head;

	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = new_node;

	return;
		
}
void print_list(node* head ){

	while(head != NULL){
		printf("%d->",head->value);
		head = head->next;
	}
	printf("%p",NULL);

	return;
	
}

void free_list(node* head){
	node* next_node = NULL;

	while(head != NULL){
		next_node = head->next;
		free(head);
		head = next_node;
	}
}

int main(){
	
	node* head = NULL;

	insert_beginning(&head,1);
	insert_beginning(&head,2);
	insert_beginning(&head,3);
	insert_beginning(&head,4);
	insert_beginning(&head,5);

	insert_ending(&head, 6);
	insert_ending(&head, 7);
	insert_ending(&head, 8);
	insert_ending(&head, 9);
	insert_ending(&head, 10);
	
	print_list(head);

	free_list(head);

	return 0;

}
