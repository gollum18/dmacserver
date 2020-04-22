#ifndef __DMAC_HTABLE__
#define __DMAC_HTABLE__

#define MAX_VAL 256

// llist structure
typedef struct llist_t {
	char key[MAX_VAL];
	char value[MAX_VAL];
	struct llist_t *next;
} llist_t;

// htable structure
typedef struct htable_t {
	uint32_t size;
	struct llist_t *table[0];
} htable_t;

// htable prototypes
htable_t * htable_create(htable_t *, uint32_t);
void htable_dispose(htable_t *);
void htable_delete(htable_t *, char *);
uint32_t htable_hash(htable_t *, char *);
char * htable_get(htable_t *, char *);
uint32_t htable_length(htable_t *);
void htable_put(htable_t *, char *, char *);

// llist prototypes
llist_t * create_llist(char *, char *);
void dispose_llist(llist_t *);
void llist_add(llist_t *, char *, char *);
void llist_delete(llist_t *, char *);
char * llist_get(llist_t *, char *);
uint32_t llist_length(llist_t *);

#endif
