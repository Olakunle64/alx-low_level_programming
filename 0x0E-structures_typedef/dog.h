#ifndef DOG_H
#define DOG_H

/*
 * struct dog - This is a structure that contains 3 members
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: This structure is meant to receive the name, age
 * and owner of something or person.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
