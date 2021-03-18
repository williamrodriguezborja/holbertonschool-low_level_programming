#ifndef LIST_H
#define LIST_H
/* macros variables*/

#define NIL "(nil)"

/* types */

typedef struct list list_t;

/* structs */
/**
 * struct list - this is a linked list structure
 * @str: string
 * @len: length of s
 * @next: linked next element in list
 */
struct list
{
	char *str;
	int len;
	list_t *next;
};


/* Prototypes functions */
size_t print_list(const list_t *h);

#endif
