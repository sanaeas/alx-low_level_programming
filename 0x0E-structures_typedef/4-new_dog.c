#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - a function that creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *temp;
	int i, n_len, o_len;

	temp = malloc(sizeof(*temp));
	if (!temp || !name || !owner)
		return (NULL);
	for (n_len = 0; name[n_len]; n_len++)
		;
	for (o_len = 0; owner[o_len]; o_len++)
		;
	temp->name = malloc(n_len + 1);
	temp->owner = malloc(o_len + 1);

	if (!(temp->name) || !(temp->owner))
	{
		free(temp->name);
		free(temp->owner);
		free(temp);
		return (NULL);
	}
	for (i = 0; i < n_len; i++)
		temp->name[i] = name[i];
	temp->name[i] = '\0';
	temp->age = age;
	for (i = 0; i < o_len; i++)
		temp->owner[i] = owner[i];
	temp->owner[i] = '\0';

	return (temp);
}
