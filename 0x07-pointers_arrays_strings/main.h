#ifndef MAIN_H
#define MAIN_H

char *_memset(char *s, char b, unsigned int n);
void simple_print_buffer(char *buffer, unsigned int size);
char *_memcpy(char *dest, char *src, unsigned int n);
void simple_print_buffer(char *buffer, unsigned int size);
char *_strchr(char *s, char c);
int main(void);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif
