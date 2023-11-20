#include "monty.h"
/**
* pchar - convert a node into a char
* @st : strng conatin the opcode instruction
* @line_number : the line number
*/
void pchar(stack_t **st, unsigned int line_number)
{
	if (!st || !(*st))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		free_list(*st);
		free(glob_var.insa);
		fclose(glob_var.bf);
		exit(EXIT_FAILURE);
	}
	if ((*st)->n < 0 || (*st)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		free_list(*st);
		free(glob_var.insa);
		fclose(glob_var.bf);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*st)->n);
}

