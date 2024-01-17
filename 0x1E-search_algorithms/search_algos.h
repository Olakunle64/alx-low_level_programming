#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

/* Standard library used */
#include <stdio.h>
#include <stddef.h>

/* Prototypes of all functions in this project */
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int binary_recur(int *array, int value, int start, int end);
void print_search(int *array, size_t start, size_t end);

#endif /* SEARCH_ALGOS_H */
