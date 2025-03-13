#ifndef DOG_H
#define DOG_H

/* Define a new type struct dog */
struct dog {
    char *name;
    float age;
    char *owner;
};

/* Define a new type dog_t as a new name for the type struct dog */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
