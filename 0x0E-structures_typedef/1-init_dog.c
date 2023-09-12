#include <stdio.h>
#include "dog.h"
/**
* init_dog -  initialize a variable of type struct dog
* Description: initialize a variable of type struct dog
* @d:farg
* @name:sarg
* @age:targ
* @owner:foarg
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
