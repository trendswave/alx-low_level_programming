#include "main.h"

void _putchar(char c)
/**
* print_triangle - Prints a triangle using '#'.
* @size: The size of the triangle.
*/
void print_triangle(int size)
{
    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            _putchar(' ');
        }

        for (int k = 0; k < i; k++)
        {
            _putchar('#');
        }

        _putchar('\n');
    }
}
