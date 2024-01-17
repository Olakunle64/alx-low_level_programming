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
int jump_search(int *array, size_t size, int value);

/**
 * struct listint_s - singly linked list
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

listint_t *jump_list(listint_t *list, size_t size, int value);
#endif /* SEARCH_ALGOS_H */
