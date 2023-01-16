/**
 * init_dog - initialize a variable of type struct dog
 * @d - struct type
 * @name - member of the struct
 * @age - float type
 * @owner - char * type
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
(*d).name = name;
(*d).age = age;
(*d).owner = owner;
}
