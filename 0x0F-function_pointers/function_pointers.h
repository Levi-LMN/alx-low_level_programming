#ifndef MAIN_H
#define MAIN_H

void print_name(char *name, void (*f)(char *));
int _putchar(char c);
#include <stddef.h> /* for size_t */

void array_iterator(int *array, size_t size, void (*action)(int));

#endif /* MAIN_H */

