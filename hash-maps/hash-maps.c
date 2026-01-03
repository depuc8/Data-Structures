#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "hash-maps.h"

NODE* Hash_Table[TABLE_SIZE] = {NULL};

unsigned int hash(const char *key) {
    unsigned int h = 0;
    while (*key) {
        h = (h * 31) + *key++;
    }
    return h % TABLE_SIZE;
}

void hash_put(const char *key, const char *value){

	unsigned int index = hash(key);

	NODE* current = Hash_Table[index];

	while(current){
		if(strcmp(current->key,key)==0){
			strcpy(current->value,value);
			return;
		}
		current = current->next;
	}
	
	NODE* new_node = malloc(sizeof(NODE));
	if(!new_node) return; 
	strcpy(new_node->key,key);
	strcpy(new_node->value,value);
	new_node->next = Hash_Table[index];
	Hash_Table[index] = new_node;
}

const char* hash_get(const char *key){

	unsigned int index = hash(key);
	NODE* current = Hash_Table[index];

	while(current){
		if(strcmp(current->key,key) == 0){
			return current->value;	
		}
		current = current->next;
	}
	return NULL;	
}

void free_table(void){
	for(int i = 0; i < TABLE_SIZE; i++){
		NODE* current = Hash_Table[i];
		while(current){
			NODE* temp = current;
			current = current->next;
			free(temp);
		}
	}
}
