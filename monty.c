#include "monty.h"

int main(int argc, char *argv[])
{
	char *buffer = NULL;
	size_t buffersize = 0;
	FILE *fd;
	stack_t *STACK, *tmp;
	char *argument = NULL;

	STACK = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (!fd)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file);
		exit(EXIT_FAILURE);
	}

	while ((getline(&buffer, &buffersize, fd)) != (-1))
	{
		if (*buffer == '\n')
		{
			line_number++;
			continue;
		}
		argument = strtok(buffer, " \t\n");
		if (!argument)
		{
			line_number++;
			continue;
		}
		Arg.argument = strtok(NULL, " \t\n");
		run_argument(argument, &STACK, line_number);
		line_number++;
	}
	free(buffer);
	if (STACK != NULL)
	{
		while (STACK != NULL)
		{
			tmp = STACK;
			STACK = tmp->next;
			free(tmp);
		}
	}
	fclose(fd);
	exit(EXIT_SUCCESS);
}

void run_argument(char *argument, stack_t **stack, unsigned int line_number)
{
	int i;
	instruction_t argument_list[] = {
		{"push", push}
		{"pall", pall}
		{"pint", pint}
		{NULL, NULL}
	};

	while(argument_list[i].opcode)
	{
		if (strcmp(argument_list[i].opcode, argument) == 0)
		{
			argument_list[i].f(stack, line_number);
			return;
		}
		i++;
	}
	fprintf(stderr, "L%d: unkown instruction %s\n", line_number, argument);
	exit(EXIT_FAILURE);
}


