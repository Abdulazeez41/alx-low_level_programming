#ifndef _DOG_H_
#define _DOG_H_

/**
 *	struct dog - About dogs
 *	@name: dog name
 *	@age: dog age
 *	@owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *	dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
