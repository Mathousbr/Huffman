#define BYTENUMBER_MAX 256

typedef unsigned char u_char;
typedef unsigned int u_int;
typedef struct hashTable hTable;
typedef struct node node;
struct hashTable {
	node *byte[BYTENUMBER_MAX];
};
struct node {
	u_char bit;
	node *next;
};

hTable* createHashTable();							//Create Hash Table
void put(hTable *table, int byte, u_char bit);		//Add bit in Hash Table
