#include "dog.h"
/**
* struct dog - initialize a variable of type
* @d: pointer
* @name: string #1
* @age: float
* @owner:string #2
* Return: Nothing.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
}
