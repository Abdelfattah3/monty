#include "monty.h"
/**
* pall - checks for the instructions
* @st : strng conatin the opcode instruction
* @line_number : the line number
*/
void pall(stack_t **st, unsigned int line_number)
{
	stack_t *te;
	(void)line_number;

	if (!st || !(*st))
	{
		return;
	}
	te = *st;
	while (te)
	{
		printf("%d\n", te->n);
		te = te->next;
	}
}

