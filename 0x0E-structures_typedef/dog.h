#ifndef DOG_H
#define DOG_H

/**
 * struct dog - The information on the dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the dog's owner
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_i - typedef for struct dog
 */
typedef struct dog dog_i;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_i *new_dog(char *name, float age, char *owner);
void free_dog(dog_i *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
