#include "main.h"
#include <stdlib.h>
/**
 *create_array - Creates an array of characters
 *@size: Size of the array
 *@c: Pointer to array or NULL if empty
 *Return: Pointer to array or NULL if empty
 */
char *create_array(unsigned int size, char c)
{
char *ar;
unsigned int i;
if (size == 0)
return (NULL);
ar = malloc(size * sizeof(char));
if (ar == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
ar[i] = c;
}
return (ar);
}
