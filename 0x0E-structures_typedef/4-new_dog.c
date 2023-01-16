#include <stdlib.h>

#include "dog.h"



int _strlen(char *s);

char *_strcpy(char *dest, char *src);



/**
 *
 *   * new_dog - ...
 *
 *     * @name: ...
 *
 *       * @age: ...
 *
 *         * @owner: ...
 *
 *           *
 *
 *             * Return: ...
 *
 *               */

dog_t *new_dog(char *name, float age, char *owner)

{

		dog_t *cutie_dog;

			int name_l = 0, own_l = 0;



				if (name != NULL && owner != NULL)

						{

									name_l = _strlen(name) + 1;

											own_l = _strlen(owner) + 1;

													cutie_dog = malloc(sizeof(dog_t));



															if (cutie_dog == NULL)

																			return (NULL);
