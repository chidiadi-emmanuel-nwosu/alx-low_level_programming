#ifndef MAIN_H
#define MAIN_H

/*
 * File: main.h
 * Author: Chidiadi E. Nwosu
 * Desc: function prototypes for more_malloc_free task
 */
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

int check_dig(int, char **);
int check_len(char *);
void output(int, int *);


#endif
