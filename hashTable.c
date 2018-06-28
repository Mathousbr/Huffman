#include <stdio.h>
#include <stdlib.h>
#include "hashTable.h"
#include "utilities.h"

hTable* createHashTable() {
	hTable *newHTable = (hTable*)malloc(sizeof(hTable));
	int a = 0;
	for(a = 0; a < BYTENUMBER_MAX; a++) {
		newHTable->byte[a] = NULL;
	}
	return newHTable;
}

void put(hTable *table, int byte, u_char bit) {
	int position = byte % BYTENUMBER_MAX;
	node *newBit = (node*)malloc(sizeof(node));
	if(table->byte[position] == NULL) {
		table->byte[position] = newBit;
		newBit->bit = bit;
		newBit->next = NULL;
	} else {
		node *previous = table->byte[position];
		while(previous->next != NULL) {
			previous = previous->next;
		}
		previous->next = newBit;
		newBit->bit = bit;
		newBit->next = NULL;
	}
}
