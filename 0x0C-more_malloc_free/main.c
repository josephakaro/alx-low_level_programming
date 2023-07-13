#ifndef MAIN_H
#define MAIN_H

extern void *malloc_checked(unsigned int b);
extern char *string_nconcat(char *sl, char *s2, unsigned int n);
extern void *_calloc(unsigned int nmemb, unsigned int size);
extern int *array_range(int min, int max);
extern void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
