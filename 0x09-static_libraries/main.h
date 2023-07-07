#ifndef MAIN_H
#define MAIN_H

extern int _putchar(char c);
extern int _islower(int c);
extern int _isalpha(int c);
extern int _abs(int n);
extern int _isupper(int c);
extern int _isdigit(int c);
extern int _strlen(char *s);
extern void _puts(char *s);
extern char *_strcpy(char *dest, char *src);
extern int _atoi(char *s);
extern char *_strcat(char *dest, char *src);
extern char *_strncat(char *dest, char *src, int n);
extern char *_strncpy(char *dest, char *src, int n);
extern int _strcmp(char *s1, char *s2);
extern char *_memset(char *s, char b, unsigned int n);
extern char *_memcpy(char *dest, char *src, unsigned int n);
extern char *_strchr(char *s, char c);
extern unsigned int _strspn(char *s, char *accept);
extern char *_strpbrk(char *s, char *accept);
extern char *_strstr(char *haystack, char *needle);

#endif
