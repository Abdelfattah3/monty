#include "monty.h"
/**
* add - add two nodes
* @st : strng conatin the opcode instruction
* @line_number : the line number
*/
void add(stack_t **st, unsigned int line_number)
{
	stack_t *te = NULL;
	int tm;

	if ((!st || !(*st)) || (!(*st)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_list(*st);
		free(glob_var.insa);
		fclose(glob_var.bf);
		exit(EXIT_FAILURE);
	}
	te = *st;
	tm = (*st)->n + te->next->n;
	te->next->n = tm;
	pop(st, line_number);
}

