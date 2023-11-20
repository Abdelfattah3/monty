#include "monty.h"
/**
* pstr - convert a stack into string
* @st : strng conatin the opcode instruction
* @line_number : the line number
*/
void pstr(stack_t **st, unsigned int line_number)
{
	stack_t *te;
	(void)line_number;

	te = *st;
	if (!st || !(*st))
	{
		printf("\n");
	}
	while (te != NULL && te->n != 0 && (te->n >= 0 && te->n <= 127))
	{
		putchar(te->n);
		te = te->next;
	}
	putchar('\n');
}
