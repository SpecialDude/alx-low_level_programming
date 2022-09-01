#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void * _calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
unsigned int _min(unsigned int a, unsigned int b);
unsigned int _strlen(char *str);
void _putstr(char *str);
int isalldigit(char *str);
void print_number(int n);

#endif