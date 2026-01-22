#ifndef STACK_H
#define STACK_H

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#define SIZE 100

typedef struct STACK{
	uint32_t data[SIZE];
	int32_t top;
}STACK;

void stack_init(STACK *s);

void push(STACK *s ,uint32_t n);

void pop(STACK *s);

size_t size(const STACK *s);

bool isEmpty(const STACK *s);

bool isFull(const STACK *s);

#endif
