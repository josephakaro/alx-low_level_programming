#ifndef MAIN_H
#define MAIN_H

extern char *_memset(char *s, char b, unsigned int n);
extern int _putchar(char c);
extern char *_memcpy(char *dest, char *src, unsigned int n);
extern char *_strchr(char *s, char c);
extern unsigned int _strspn(char *s, char *accept);
extern char *_strpbrk(char *s, char *accept);
extern char *_strstr(char *haystack, char *needle);
extern void print_chessboard(char (*a)[8]);
extern void print_diagsums(int *a, int size);
extern void set_string(char **s, char *to);
#endif
