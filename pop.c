#include "monty.h"
/**
* pop - remove the top element
* @st : strng conatin the opcode instruction
* @line_number : the line number
*/
void pop(stack_t **st, unsigned int line_number)
{
	stack_t *te = NULL;

	if (!st || !(*st))
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		free_list(*st);
		free(glob_var.insa);
		fclose(glob_var.bf);
		exit(EXIT_FAILURE);
	}
	te = *st;
	*st = te->next;
	free(te);
}

