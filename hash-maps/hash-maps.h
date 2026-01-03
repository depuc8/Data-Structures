#ifndef HASH_MAPS_H
#define HASH_MAPS_H

#define TABLE_SIZE 101
#define NAME_SIZE 50
#define PHONE_SIZE 16

typedef struct NODE{

	char key[NAME_SIZE];
	char value[PHONE_SIZE];
	struct NODE *next;

}NODE;

extern NODE* Hash_Table[TABLE_SIZE];

void hash_put(const char *key, const char *value);

const char* hash_get(const char *key);

void free_table(void);

#endif
