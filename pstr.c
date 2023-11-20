#include "monty.h"
/**
* pstr - convert a stack into string
* @st : strng conatin the opcode instruction
* @line_number : the line number
*/
void pstr(stack_t **st, unsigned int line_number)
{
	if (!st || !(*st))
	{
		putchar('\n');
		return;
	}
	if ((*st)->n == 0 || ((*st)->n < 0 || (*st)->n > 127))
	{
		return;
	}
	putchar((*st)->n);
	pstr(&((*st)->next), (line_number + 1));
}
