#include "monty.h"
/**
* modfunc - gets the modulus of the top two nodes
* @st : strng conatin the opcode instruction
* @line_number : the line number
*/
void modfunc(stack_t **st, unsigned int line_number)
{
	stack_t *te = NULL;
	int mo;

	if ((!st || !(*st)) || (!(*st)->next))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
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
	mo = (te->next->n % te->n);
	*st = te->next;
	(*st)->n = mo;
	free(te);
}
