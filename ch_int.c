#include "monty.h"
/**
* ch_int - checks for the number to push
* @a: pointer to the int to be chekced
* Return: 0 in success 1 in failure
*/
int ch_int(char *a)
{
	size_t i = 0;

	if (a[0] == '-')
	{
		i++;
	}
	while (a[i])
	{
		if (a[i] < '0' || a[i] > '9')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

