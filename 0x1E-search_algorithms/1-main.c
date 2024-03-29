#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        1, 2, 3, 4, 5
    };
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    size_t s = sizeof(arr) / sizeof(arr[0]);
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 4, binary_search(array, size, 4));
    /*printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));*/
    printf("Found %d at index: %d\n\n", 1, binary_search(arr, s, 1));
    printf("Found %d at index: %d\n\n", 20, binary_search(arr, s, 20));
    return (EXIT_SUCCESS);
}
