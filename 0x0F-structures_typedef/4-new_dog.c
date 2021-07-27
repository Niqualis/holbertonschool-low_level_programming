#include "dog.h"
#include <stdlib.h>
char *_strdup(char *str);
/**
* new_dog - creates a new dog
* @name: variable pointing to name of dog
* @age: age of dog
* @owner: variable pointing to dog owner
*
* Return: variable pointing to dog_t struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
char *s1;
char *s2;
dog_t *pupper;

pupper = malloc(sizeof(dog_t));
if (pupper == NULL)
return (NULL);
s1 = _strdup(name);
if (s1 == NULL)
{
free(pupper);
return (NULL);
}
s2 = _strdup(owner);
if (s2 == NULL)
{
free(s1);
free(pupper);
return (NULL);
}
pupper->name = s1;
pupper->owner = s2;
pupper->age = age;
return (pupper);
}
/**
* _strdup - returns a pointer to dup string, new allocated m\
emory
* @str: string to copy
*
* Return: pointer to new string or NULL
*/
char *_strdup(char *str)
{
char *a;
unsigned int i, j;
unsigned int len = 0;

if (str == NULL)
return (NULL);
j = 0;
while (*(str + j) != '\0')
{
len++;
j++;
}
a = malloc((len + 1) * sizeof(char));
if (a == NULL)
return (NULL);
i = 0;
while (i < len)
{
*(a + i) = *(str + i);
i++;
}
*(a + len) = '\0';
return (a);
}
