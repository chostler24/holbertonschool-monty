#include "monty.h"

/**
  * push - adds node to end
  * @stack: head node
  * @line_number: line number
  * Return: none
  */

void push(stack_t **stack, unsigned int line_number)
{
	char *argstring = Arg.argument;
	int i, argdata;
	stack_t *new;

	if (argstring == NULL)
	{
		fprintf(stderr, "L%i: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	for (i = 0; argstring[i] != '\0'; i++)
	{
		if ((isdigit(argstring[i])) == 0 && argstring[i] != '-')
		{
			fprintf(stderr, "L%i: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}

	argdata = atoi(argstring);
	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = argdata;
	new->prev = NULL;
	new->next = *stack;

	if ((*stack) != NULL)
	{
		(*stack)->prev = new;
	}

	*stack = new;
}
