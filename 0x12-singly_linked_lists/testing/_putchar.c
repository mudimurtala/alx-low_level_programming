#include <stdio.h>
/**
 * _putchar - writes a single character to the stdout
 * @c: the character to print
 * Return: on success 1.
 * On error, -1
*/
int _putchar(char c)
{
    return (write(1, &c, 1));
}