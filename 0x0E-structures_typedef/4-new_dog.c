#include "dog.h"

/**
 * new_dog - creates a new dog details
 * @name: dogs name
 * @age: dogs age
 * @owner: dogs owner
 * Return: struct pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->age = age;
	ptr->owner = owner;

	return (ptr);
}
