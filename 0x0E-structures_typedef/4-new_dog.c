#include <stdlib.h>
#include "dog.h"

/**
* new_dog - new dog & informations
* @name: string #1
* @age: float
* @owner: string #2
* Return: dog or NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *dog;
dog = malloc(sizeof(struct dog));
if (dog == NULL)
return (NULL);
(*dog).name = name;
(*dog).age = age;
(*dog).owner = owner;
return (dog);
}
