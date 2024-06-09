// Program showing the concept of chain hashing in C for collision removal
#include <stdio.h>
#include <stdlib.h>
#define BUCKET_SIZE 10
// Node structure for the linked list in each bucket
typedef struct Node {
int key;
struct Node* next;
}NODE;
// Hash table structure containing an array of linked list nodes
typedef struct HashTable {
NODE* table[BUCKET_SIZE];
}HASH;
// Initialize the hash table
void initHashTable(HASH* ht) {
for (int i = 0; i < BUCKET_SIZE; i++) {
ht->table[i] = NULL;
}
}
// Hash function (k mod 10)
int hashFunction(int key) {
return key % BUCKET_SIZE;
}
// Insert a key into the hash table
void insert(HASH* ht, int key) {
int index = hashFunction(key);
NODE* newNode = (NODE*)malloc(sizeof(NODE));
newNode->key = key;

newNode->next = ht->table[index];
ht->table[index] = newNode;
}
// Print the hash table
void printHashTable(HASH* ht) {
for (int i = 0; i < BUCKET_SIZE; i++) {
printf("Bucket %d: ", i);
NODE* current = ht->table[i];
while (current != NULL) {
printf("%d -> ", current->key);
current = current->next;
}
printf("NULL\n");
}
}
int main() {
HASH ht;
initHashTable(&ht);
insert(&ht, 1);
insert(&ht, 11);
insert(&ht, 21);
insert(&ht, 3);
insert(&ht, 13);
insert(&ht, 23);
printHashTable(&ht);
return 0;
}
/*Output: 
            Bucket 0: NULL
            Bucket 1: 21 -> 11 -> 1 -> NULL
            Bucket 2: NULL
            Bucket 3: 23 -> 13 -> 3 -> NULL
            Bucket 4: NULL
            Bucket 5: NULL
            Bucket 6: NULL
            Bucket 7: NULL
            Bucket 8: NULL
            Bucket 9: NULL*/
