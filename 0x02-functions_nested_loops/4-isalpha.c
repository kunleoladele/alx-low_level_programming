#include "main.h"

/**
 * _isalpha - return 1 if input c is lowercase or uppercase
 *
 * @c: character is either lowercase or uppercase
 *
 * Return: 1 for alphabet otherwise 0
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'})

return (1);

else

return (0);
}
