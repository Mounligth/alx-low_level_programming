#include "main.h"


/**
*_islower - write a function that cheks for the lowercase character
*@c: is a interger
*Return: 1 or 0
*/
int _islower(int c)
{
if (c <= 122 && c >= 97)
return (1);
return(0);
}
