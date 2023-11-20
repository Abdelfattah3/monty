#include "monty.h"
g_t glob_var = {{NULL, NULL}, NULL, NULL};
/**
* main - program build a stack
* @ac: number of arguments
* @av: the arguments
* Return: 0 in success or -1 in failure
*/
int main(int ac, char **av)
{
	char *a = NULL;
	size_t n = 0, ln = 1, m = 0;
	ssize_t r;
	stack_t *st = NULL;

	instruction_t opco[] = {
		{"push", push}, {"pall", pall}, {"pint", pint}, {"pop", pop},
		{"swap", swap}, {"add", add}, {"nop", nop}, {"sub", subfunc},
		{"mul", mulfunc}, {"div", divfunc}, {"mod", modfunc}, {NULL, NULL}};
	if (ac != 2)
		fprintf(stderr, "USAGE: monty file\n"), exit(EXIT_FAILURE);

	glob_var.bf = fopen(av[1], "r");
	if (glob_var.bf == NULL)
		fprintf(stderr, "Error: Can't open file %s\n", av[1]), exit(EXIT_FAILURE);
	while (1)
	{
		a = NULL;
		r = getline(&a, &n, glob_var.bf);
		glob_var.insa = a;
		if (r == EOF)
			break;

		m = 0, glob_var.ins[m] = strtok(glob_var.insa, " \n");
		if (pars(ln, a))
		{
			ln++;
			continue;
		}
		if (glob_var.ins[m])
			glob_var.ins[m + 1] = strtok(NULL, " \n");
		if (strcmp(glob_var.ins[0], "push") == 0 && ch_int(glob_var.ins[1]))
			free(a), push_e(st, ln);

		check_inst(&st, opco, ln);
		ln++, free(a);
	}
	fclose(glob_var.bf), free(glob_var.insa), free_list(st);
	return (0);
}
