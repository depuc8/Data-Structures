#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define TABLE_SIZE 101
#define NAME_SIZE 50
#define PHONE_SIZE 16

typedef struct NODE{

	char name[NAME_SIZE];
	char phone[PHONE_SIZE];
	struct NODE *next;

}NODE;

NODE* Hash_Table[TABLE_SIZE];

unsigned int hash(const char *key) {
    unsigned int h = 0;
    while (*key) {
        h = (h * 31) + *key++;
    }
    return h % TABLE_SIZE;
}

void Hash_put(char *key, char *value){

	unsigned int index = hash(*key);

	if(strcmp(Hash_Table[index]->key,*key)==0)

}
