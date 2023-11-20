#include "monty.h"
/**
* subfunc - subtract two nodes
* @st : strng conatin the opcode instruction
* @line_number : the line number
*/
void subfunc(stack_t **st, unsigned int line_number)
{
	stack_t *te = NULL;
	int su;

	if ((!st || !(*st)) || (!(*st)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		free_list(*st);
		free(glob_var.insa);
		fclose(glob_var.bf);
		exit(EXIT_FAILURE);
	}
	te = *st;
	su = (te->n - te->next->n);
	*st = te->next;
	(*st)->n = su;
	free(te);
}

