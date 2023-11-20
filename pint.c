#include "monty.h"
/**
* pint - prints the last node
* @st : strng conatin the opcode instruction
* @line_number : the line number
*/
void pint(stack_t **st, unsigned int line_number)
{
	stack_t *te = NULL;

	if (!st || !(*st))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	te = *st;
	if (te != NULL)
		printf("%d\n", te->n);
}

