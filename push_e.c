#include "monty.h"
/**
* push_e - push error after adding wrong type
* @st:  pointer to a double pointer to the arguments
* @ln: line number
*/
void push_e(stack_t *st, size_t ln)
{
	fprintf(stderr, "L%ld: usage: push integer\n", ln);
	free_list(st);
	fclose(glob_var.bf);
	exit(EXIT_FAILURE);
}

