#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: head pointer
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t countit = 0;

    if (h == NULL)
    {
        return (countit);
    }

    for (const list_t *pointer = h; pointer != NULL; pointer = pointer->next, countit++)
    {
        if (pointer->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%d] %s\n", pointer->len, pointer->str);
        }
    }

    return (countit);
}
