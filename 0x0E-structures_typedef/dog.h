#ifndef DOG_H
#define DOG_H

/**
 * struct dog- a dog's basic info
 * @name: name of dog
 * @age: age
 * @owner: owner
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * dog_h - typedef 
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
