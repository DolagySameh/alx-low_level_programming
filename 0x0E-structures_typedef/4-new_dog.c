#include "dog.h"
/**
* new_dog -  creates a new dog.
* Description: creates a new dog.
* @name:first arg
* @age:targ
* @owner:second arg
* Return:pointer
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;
	dog_t *p;

	d.name = name;
	d.age = age;
	d.owner = owner;
	p = &d;
	if (p)
	{	
		p->name = name;
		p->age = age;
		p->owner = owner;
	}
	return (p);
}
