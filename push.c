#include "monty.h"

/**
  * push - adds node to end
  * @stack: end node
  * @line_number: line number
  * Return: none
  */

void push(stack_t **stack, unsigned int line_number)
{
	char *argstring = Arg.argument;
	int i, argdata;

	if (*argstring == NULL)
	{
		fprintf(stderr, "Error: unknown instruction");
		exit(EXIT_FAILURE);
	}

	for (i = 0; argstring[i] != '\0'; i++)
	{
		if ((isdigit(argstring[i])) == 0 && argstring[i] != '-')
		{
			fprintf(stderr, "Error: unknown instruction");
			exit(EXIT_FAILURE);
		}
	}

	argdata = atoi(argstring);
	stack_t *new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}

	new->n = n;
	new->prev = NULL;
	new->next = *stack;

	if ((*stack) != NULL)
	{
		(*stack)->prev = new;
	}

	*stack = new;
}
