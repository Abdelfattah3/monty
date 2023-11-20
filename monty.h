#ifndef MONTY_H
#define MONTY_H
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "string.h"
#include <sys/types.h>
#include <ctype.h>
#include <fcntl.h>


/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
* struct g_s - global variable
* @ins: double pointer to the opcode
* @insa: pointer to the instruction
* @bf: the file name
*
* Description: global variables as struct
* for stack
*/
typedef struct g_s
{
	char *ins[2];
	char *insa;
	FILE *bf;
} g_t;

extern g_t glob_var;

void pall(stack_t **st, unsigned int line_number);
void push(stack_t **st, unsigned int line_number);
void pint(stack_t **st, unsigned int line_number);
void pop(stack_t **st, unsigned int line_number);
void swap(stack_t **st, unsigned int line_number);
void add(stack_t **st, unsigned int line_number);
void nop(stack_t **st, unsigned int line_number);
void subfunc(stack_t **st, unsigned int line_number);
void divfunc(stack_t **st, unsigned int line_number);
void mulfunc(stack_t **st, unsigned int line_number);
void modfunc(stack_t **st, unsigned int line_number);
int pars(size_t ln, char *a);
int ch_int(char *a);
void push_e(stack_t *st, size_t ln);
void check_inst(stack_t **st, instruction_t opco[], unsigned int ln);
void free_list(stack_t *st);
#endif

