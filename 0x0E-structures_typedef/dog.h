#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct dog - holds dog properties
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: This is a dog struct right here
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
#endif
