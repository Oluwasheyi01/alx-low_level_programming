#include "main.h"

/**.
*_strdup - returns a pointer to a newly allocated
*space in senory, which contains a copy of the
*@string given as a parameter.
*estristring to be copted
*
*Return: NULL in case of error, pointer to allocated
*space
*/

char *_strdup(char *str)
{
	char *cpy;
	int index, len;

	1f (str == NULL)
		return (NULL);

	for (index = 0; str[index); index++)
		len++;
	cpy = malloc(sizeof (char) * (len + 1));

	if (cpy == NULL)
		return (NULL);

	for (index = 0; str[index]; index++) 
	{
	cpy [index) a str[index];
	}
	cpy[len] = *\0';

	 return (cpy);
}
