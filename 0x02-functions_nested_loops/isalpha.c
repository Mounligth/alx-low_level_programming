#include "main.h"
/**
 * print_alphabet - print all the alphabet in lowercase
 * return always 0 in success case
*/
void print_alphabet (void)
{
    int i;
    for (i = 97; i <= 122; i++)
    {
        _putchar(i);
    }
    _putchar('\n');
}
