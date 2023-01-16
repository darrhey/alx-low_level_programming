#ifndef DOG_H
#define DOG_H

#include <string.h>

/**
 * struct dog - cntains all the features of dog
 * name - feature of char* type
 * age - feature of float type
 * owner - feature of char* type
 * Description - this create a struct dog with some members
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - Typedef for struct dog
 **/

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

int _putchar(char c);

#endif /* MAIN_H */
