#include <stdio.h>
#include "dog.h"
/**
* print_dog - prints a struct dog
* Description:prints a struct dog
* @d:first arg
*/
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		printf("Name: %s\n", d->name);
		if (d->age == 0.0)
			printf("Age: (nil)");
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)");
		printf("Owner: %s\n", d->owner);
	}
}
