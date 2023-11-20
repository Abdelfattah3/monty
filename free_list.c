#include "monty.h"
/**
* free_list - frees the memory after usage
* @st : the double linked list
*/
void free_list(stack_t *st)
{
	stack_t *ne;

	while (st)
	{
		ne = st->next;
		free(st);
		st = ne;
	}
}
