#include "monty.h"
/**
* pars - pars the file opcodes
* @ln: line number
* @a: pointer to strng conatin the opcode instruction
* Return: 0 in success or -1 in failure
*/
int pars(size_t ln, char *a)
{
	if (glob_var.ins[0] == NULL || glob_var.ins[0][0] == '#')
	{
		ln++;
		free(a);
		return (1);
	}
	return (0);
}
