#include <stdio.h>
#include "dog.h"

/**
 * struct dog - initialize a variable of type
 * 
 * @param d 
 * @param name 
 * @param age 
 * @param owner 
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    (*d).name = name;
    (*d).age = age;
    (*d).owner = owner;
}
