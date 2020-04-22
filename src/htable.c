#include <stdlib.h>
#include <string.h>
#include "htable.h"

/**
 * Initializes a hash table to size 'size'.
 * @param size The number of rows in the hash table.
 * @returns A pointer to a memory region size for a htable_t
 * struct.
 */
htable_t * htable_create(uint32_t size) {

}

/**
 * Frees the space allocated for a hash table.
 */
void htable_dispose(htable_t * table) {

}

/**
 * Removes a key-value pair from a hash table.
 * @param table A pointer to a hash table.
 * @param key The key portion of a key-value pair.
 */
void htable_delete(htable_t * table, char * key) {

}

/**
 * Returns a position in a hash table.
 * @param table A pointer to a hash table.
 * @param key The key portion of a key-value pair.
 * @returns A position in a hash table.
 */
uint32_t htable_hash(htable_t * table, char * key) {

}

/**
 * Returns a matching value portion of a key-value pair.
 * @param table A pointer to a hash table.
 * @param key The key portion of a key-value pair.
 * @returns The value portion of a key-value pair.
 */
char * htable_get(htable_t * table, char * key) {

}

/**
 * Returns the number of key-value pairs in a hash table.
 * @param table A pointer to a hash table.
 * @returns The number of key-value pairs in a hash table.
 */
uint32_t htable_length(htable_t * table) {

}

/**
 * Stores a key-value pair in a hash table.
 * @param table A pointer to a hash table.
 * @param key The key portion of a key-value pair.
 * @param value The value portion of a key-value pair.
 */
void htable_put(htable_t * table, char * key, char * value) {

}

/**
 * Returns a pointer allocated to the size of a llist_t struct.
 * @param key The key portion of a key-value pair.
 * @param value The value portion of a key-value pair.
 * @returns A pointer to a memory region size for a llist_t struct.
 */
llist_t * create_llist(char * key, char * value) {

}

/**
 * Frees the space allocated for a linked list.
 * @param head The head of a linked list.
 */
void dispose_list(llist_t * head) {

}

/**
 * Adds a key-value pair to a linked list.
 * @param head The head of a linked list.
 * @param key The key portion of the key-value pair.
 * @param value The value portion of the key-value pair.
 */
void llist_add(llist_t * head, char * key, char * value) {

}

/**
 * Removes an item from a linked list.
 * @param head The head of a linked list.
 * @param key The key of the key-value pair to remove from a
 * linked list.
 */
void llist_delete(llist_t * head, char * key) {

}

/**
 * Gets the length of a linked list.
 * @param head The head of a linked list.
 * @returns The number of elements in a linked list.
 */
uint32_t llist_length(llist_t * head) {

}
