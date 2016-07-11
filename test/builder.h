#ifndef BUILDER_H
#define BUILDER_H
#include <stdio.h>
#include "common.h"
#define BUFFER_SIZE 1024

char* bld_read_line(void);
void bld_loop(void);
size_t getline(char **data, size_t *n, FILE *stream);

#endif // BUILDER_H