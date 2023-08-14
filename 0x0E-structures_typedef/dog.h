#ifndef dog_h
#define dog_h

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - Short description
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
