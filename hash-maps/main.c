#include <stdio.h>
#include "hash-maps.h"

int main(void) {
    const char *result;

    /* Insert entries */
    hash_put("Alice", "9876543210");
    hash_put("Bob", "1234567890");
    hash_put("Charlie", "5555555555");

    /* Lookup existing keys */
    result = hash_get("Alice");
    printf("Alice -> %s\n", result ? result : "NOT FOUND");

    result = hash_get("Bob");
    printf("Bob -> %s\n", result ? result : "NOT FOUND");

    result = hash_get("Charlie");
    printf("Charlie -> %s\n", result ? result : "NOT FOUND");

    /* Lookup missing key */
    result = hash_get("David");
    printf("David -> %s\n", result ? result : "NOT FOUND");

    /* Update existing key */
    hash_put("Alice", "1111111111");
    result = hash_get("Alice");
    printf("Alice (updated) -> %s\n", result ? result : "NOT FOUND");

    /* Cleanup */
    free_table();

    return 0;
}

