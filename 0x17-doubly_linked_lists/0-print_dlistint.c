#include "lists.h"

size_t print_dlistint(const dlistint_t *h)
{
    size_t num_nodes = 0;

    if (!h)
      return (0);

    /* case base */
    if (!h)
      return (0);

    /* normal */
    printf("%d\n", h->n);
    return (1 + print_dlistint(h->next));
}
