#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text cfile and prints to the stdout
 * @filename: to be printed
 * @letters: maximum char to be printed
 * Return: number of char printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, p, rd, err;
fd = rd = err = 0;
if (!filename || !letters)
return (0);
fd = open(filename, O_RDONLY);
if (fd < 0)
return (0);
p = malloc(sizeof(char) * letters + 1);
if (rd < 0)
{
free(p);
return (0);
}
p[letters] = '\0';
err = write(STDOUT_FILENO, p, rd);
if (err <= 0)
{
free(p);
return (0);
}
free(p);
close(fd);
return (rd);
}
