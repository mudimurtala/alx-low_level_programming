// #include <stdio.h>
// #include <stdlib.h>
// #include "lists.h"

// /**
//  * print_list - prints all elements of a list_t list
//  * @h: head pointer
//  *
//  * Return: number of nodes
//  */
// size_t print_list(const list_t *h)
// {
//     size_t countit = 0;

//     const list_t *pointer;

//     if (h == NULL)
//     {
//         return (countit);
//     }

//     pointer = h;

//     while (pointer != NULL)
//     {
//         if (pointer->str == NULL)
//         {
//             printf("[0] (nil)\n");
//         }
//         else
//         {
//             printf("[%d] %s\n", pointer->len, pointer->str);
//         }
//         pointer = pointer->next;
//         countit++;
//     }
//     return (countit);
// }


// #include <stdio.h>
// #include <stdlib.h>

// struct mudi
// {
//     int amount;
//     struct mudi *address;
// };

// int main()
// {
//     struct mudi *head = NULL;
//     head = (struct mudi *)malloc(sizeof(struct mudi));
//     if (head == NULL)
//     {
//         return (1);
//     }

//     head->amount = 350;
//     head->address = NULL;

//     printf("The amount is %d\n", head->amount);
//     free (head);
//     return (0);
// }








#include <stdio.h>
#include <stdlib.h>

struct mudi
{
    int data;
    struct mudi *ptr;
};
int main()
{
    struct mudi *head = NULL;
    head = (struct mudi *)malloc(sizeof(struct mudi));
    if (head == NULL)
    {
        return (1);
    }

    head->data = 450;
    head->ptr = NULL;

    printf("%d is stored in this single node\n", head->data);
    free (head);
    return (0);
}