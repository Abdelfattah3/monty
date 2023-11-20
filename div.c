#include "monty.h"
/**
* divfunc - subtract two nodes
* @st : strng conatin the opcode instruction
* @line_number : the line number
*/
void divfunc(stack_t **st, unsigned int line_number)
{
	stack_t *te = NULL;
	int div;

	if ((!st || !(*st)) || (!(*st)->next))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", line_number);
		free_list(*st);
		free(glob_var.insa);
		fclose(glob_var.bf);
		exit(EXIT_FAILURE);
	}
	te = *st;
	if (te->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		free_list(*st);
		free(glob_var.insa);
		fclose(glob_var.bf);
		exit(EXIT_FAILURE);
	}
	div = (te->next->n / te->n);
	*st = te->next;
	(*st)->n = div;
	free(te);
}

