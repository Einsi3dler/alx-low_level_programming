#include "hash_tables.h"
void print_table(hash_table_t* table) 
{
	unsigned long int i;

	printf("\nHash Table\n-------------------\n");
    for (i=0; i<table->size; i++) {
        if (table->array[i]) {
            printf("Index:%ld, Key:%s, Value:%s\n", i, table->array[i]->next->key, table->array[i]->next->value);
        }
    }
    printf("-------------------\n\n");
}

