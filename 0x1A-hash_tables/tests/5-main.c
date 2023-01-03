#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "../hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_print(ht);

    hash_table_set(ht, "c", "fun");
    printf("c: %lu\n", key_index((unsigned char *)"c", ht->size));

    hash_table_set(ht, "python", "awesome");
    printf("python: %lu\n", key_index((unsigned char *)"python", ht->size));

    hash_table_set(ht, "Bob", "and Kris love asm");
    printf("Bob: %lu\n", key_index((unsigned char *)"Bob", ht->size));

    hash_table_set(ht, "N", "queens");
    printf("N: %lu\n", key_index((unsigned char *)"N", ht->size));

    hash_table_set(ht, "Asterix", "Obelix");
    printf("Asterix: %lu\n", key_index((unsigned char *)"Asterix", ht->size));

    hash_table_set(ht, "Betty", "Cool");
    printf("Betty: %lu\n", key_index((unsigned char *)"Betty", ht->size));

    hash_table_set(ht, "98", "Battery Street");
    printf("98: %lu\n", key_index((unsigned char *)"98", ht->size));

    hash_table_print(ht);
    return (EXIT_SUCCESS);
}