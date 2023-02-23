#include"main.h"
/**
 * _islower - write a function that checks the lowercase character
 * @c: is a integer
 * return 0 or 1
 */

/**
*return value 0 '_islower'
*/
int _islower(int c)
{/**
*return value '_islower'
*/
if (c <= 122 && c >= 97)
return (1);
else
return (0);
}
