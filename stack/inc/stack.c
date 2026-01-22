#include<stdint.h>
#include<stdbool.h>
#include<stdio.h>
#include "stack.h"

# define SIZE 100

void stack_init(STACK *s){
	s->top = -1;
	return;
}

void push(STACK *s ,uint32_t n){

	if(isFull(s)){return;}
	s->top++;
	s->data[s->top] = n;

}

void pop(STACK *s){
	if(isEmpty(s)){return;}
	s->top--;
}

bool isEmpty(const STACK *s){

	if(s->top == -1){
		return true;
	}
	return false;

}

bool isFull(const STACK *s){

	if(s->top == SIZE -1){
		return true;
	}
	return false;

}

size_t size(const STACK *s){ return s->top + 1;}

