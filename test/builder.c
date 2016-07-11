#include "builder.h"
#include <stdio.h>
#include <string.h>

void bld_loop(void)
{
	int status = 1;
	do
	{
		char *input = bld_read_line();

		free(input);
	} while (status);
}

char* bld_read_line(void)
{
	char *line = NULL;
	size_t buf_size = 0;
	getline(&line, &buf_size, stdin);
	return line;
}

size_t getline(char **data, size_t *n, FILE *stream)
{
	getc(stream);
	return *n;
}