/**
 * print_dog - prints a struct dog
 * @d - struct type
 * Description - print (nil) if an element is NULL
 **/

void print_dog(struct dog *d)
{
if (*d != NULL)
{
if ((*d).name == NULL)
{
d->name = "(nil)";
printf("Name: %c\n",d->name);
}
else
{
printf("Name: %c\n",d->name);
}
if ((*d).age < 0)
{
printf("Age: (nil)");
}
else
{
printf("Age: %f\n",d->age);
}
if ((*d).owner == NULL)
{
(*d).owner = "(nil)";
printf("Owner: %c\n",d->owner);
}
else
{
printf("Owner: %c\n",d->owner);
}
}
else
{
return;
}
}
