#include "monty.h"
/**
* swap - swaps two nodes
* @st : strng conatin the opcode instruction
* @line_number : the line number
*/
void swap(stack_t **st, unsigned int line_number)
{
	stack_t *te = NULL;
	int tm;

	if ((!st || !(*st)) || (!(*st)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		free_list(*st);
		free(glob_var.insa);
		fclose(glob_var.bf);
		exit(EXIT_FAILURE);
	}
	te = *st;
	tm = te->n;
	te->n = te->next->n;
	(*st)->n = te->n;
	te->next->n = tm;
}

