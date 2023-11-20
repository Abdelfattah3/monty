#include "monty.h"
/**
* push - checks for the instructions
* @st : strng conatin the opcode instruction
* @line_number : the line number
*/
void push(stack_t **st, unsigned int line_number)
{
	stack_t *nw = malloc(sizeof(stack_t));

	if (!nw)
	{
		free(nw);
		fprintf(stderr, "Error: malloc failed\n"), exit(EXIT_FAILURE);
	}
	if (glob_var.ins[1])
	{
		nw->n = atoi(glob_var.ins[1]);
		nw->next = NULL;
		nw->prev = NULL;
		if (*st)
		{
			nw->next = *st;
			(*st)->prev = nw;
		}
		*st = nw;
	}
	else
	{
		free(nw);
		push_e(*st, line_number);
	}
}

