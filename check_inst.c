#include "monty.h"
/**
* check_inst - checks for the instructions
* @st : the stack list
* @ln : the line number
* @opco : the stuct of instructions
*/
void check_inst(stack_t **st, instruction_t opco[], unsigned int ln)
{
	size_t i;

	for (i = 0; opco[i].opcode; i++)
	{
		if (strcmp(opco[i].opcode, glob_var.ins[0]) == 0)
		{
			opco[i].f(st, ln);
			break;
		}
	}
	if (opco[i].opcode == NULL)
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", ln, glob_var.ins[0]);
		fclose(glob_var.bf), free(glob_var.insa);
		free_list(*st), exit(EXIT_FAILURE);
	}
}
