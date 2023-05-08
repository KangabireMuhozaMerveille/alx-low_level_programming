#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
int main(int ac, char **av);
ssize_t read_textfile(const char *filename, size_t letters);
#endif
