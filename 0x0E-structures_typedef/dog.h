#ifndef DOG_H
#define DOG_H
/**
 * struct dog - is a structure representation of Dog
 * @name: Name of dog
 * @age: Age a puppy
 * @owner: Person responsable of this dog
 * Description: is a structure representation of Dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *, char *, float, char *);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
