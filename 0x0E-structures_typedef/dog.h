#ifndef DOG_H
#define DOG_H
/**
*struct dog - define a new type with following elements
*@name: string #1
*@age: float
*@owner: string #2
*/
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
